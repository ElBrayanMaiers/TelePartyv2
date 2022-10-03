import threading
from time import sleep
import tkinter
from tkinter import CENTER, Grid, filedialog
from turtle import right
from winreg import REG_DWORD_LITTLE_ENDIAN
import vlc
import base64
import keyboard
# code = base64.b64encode(b""" 
#    """)

# exec(base64.b64decode(code))

class VlcInstance():
    def __init__(self):
        self.CreateInstance()

    def CreateInstance(self):        
        self.instance = vlc.Instance()   
        self.player = self.instance.media_player_new()
        media = self.instance.media_new('video.mp4')
        self.player.set_media(media)
        threading.Thread(target=self.CreateInterface).start()
        self.player.play()
        sleep(1)
        keyboard.add_hotkey("l", self.ButtonsHide)

    def ButtonsHide(self):
        size = self.root.winfo_geometry()
        print(self.root.winfo_geometry())
        self.controlframe.grid_remove()
        sleep(0.1)
        print(self.root.winfo_geometry())

    def CreateInterface(self):
        self.root = tkinter.Tk()
        self.root.rowconfigure(0, weight=1)
        self.root.columnconfigure(0, weight=1)

        self.display = tkinter.Frame(master=self.root, width=1600, height=800)
        self.display.rowconfigure(2 , weight=1)
        self.display.columnconfigure(2, weight=1)
        self.display.grid(column=0, row=0, sticky="news")

        self.controlframe = tkinter.Frame(master=self.root, bg="red")
        self.controlframe.rowconfigure(0, weight=1)
        self.controlframe.columnconfigure(0, weight=1)
        self.controlframe.grid(column=0, row=1, sticky="wse")

        buttonframes = tkinter.Frame(master=self.controlframe, bg="pink")
        buttonframes.grid(column=1, row=0)

        inputmovie = tkinter.Button(master=self.controlframe, text="Select Movie", command=self.InputMovie).grid(column=0, row=0)
        leftbutton = tkinter.Button(master=buttonframes, text="<").grid(column=1, row=1)
        pausebutton = tkinter.Button(master=buttonframes, text="ll").grid(column=2, row=1)
        rightbutton = tkinter.Button(master=buttonframes, text=">").grid(column=3, row=1)

        self.volumecontrol = tkinter.Scale(master=self.controlframe, from_=100, to=0, orient=tkinter.VERTICAL, command=self.SetVolume, length=50, sliderlength=15)
        self.volumecontrol.set(0)
        self.volumecontrol.bind("<Button-1>", self.test)
        self.volumecontrol.grid(column=2, row=0)
        self.player.set_xwindow(self.display.winfo_id())
        self.player.set_hwnd(self.display.winfo_id())
        self.root.mainloop()

        
    def test(self, event):
        self.volumecontrol.set(100 - event.y*2)

    def SetVolume(self, volume):
        self.player.audio_set_volume(int(volume))

    def InputMovie(self):
        dialog = filedialog.askopenfile(initialdir="/", title="Select Movie", filetypes=(("Mp4", "*.mp4"), ("Avi", "*.avi")))
        media = self.instance.media_new(dialog.name)
        self.player.set_media(media)
        self.player.play()
VlcInstance()