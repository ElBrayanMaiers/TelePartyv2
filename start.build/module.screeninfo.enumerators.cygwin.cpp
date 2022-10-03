/* Generated code for Python module 'screeninfo.enumerators.cygwin'
 * created by Nuitka version 1.0.6
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_screeninfo$enumerators$cygwin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_screeninfo$enumerators$cygwin;
PyDictObject *moduledict_screeninfo$enumerators$cygwin;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[74];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[74];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("screeninfo.enumerators.cygwin"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 74; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_screeninfo$enumerators$cygwin(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 74; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9e230b1bfa4c9829696227c5ad6b1a1d;
static PyCodeObject *codeobj_b58d3b12e2a1bbf9cf957a7d22a4d87f;
static PyCodeObject *codeobj_e95ba53c0e8a8fa5b64b119eb7f531a2;
static PyCodeObject *codeobj_93da6bcfa15d3e3ec30afa1d896e67cd;
static PyCodeObject *codeobj_73df7a636feeb0714a238a1f673384f9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[66]); CHECK_OBJECT(module_filename_obj);
    codeobj_9e230b1bfa4c9829696227c5ad6b1a1d = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[67], NULL, NULL, 0, 0, 0);
    codeobj_b58d3b12e2a1bbf9cf957a7d22a4d87f = MAKE_CODEOBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NOFREE, mod_consts[7], mod_consts[68], NULL, 0, 0, 0);
    codeobj_e95ba53c0e8a8fa5b64b119eb7f531a2 = MAKE_CODEOBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[69], mod_consts[70], 4, 0, 0);
    codeobj_93da6bcfa15d3e3ec30afa1d896e67cd = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[71], NULL, 1, 0, 0);
    codeobj_73df7a636feeb0714a238a1f673384f9 = MAKE_CODEOBJECT(module_filename_obj, 6, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[72], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors();


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors(PyObject *annotations);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary(PyObject *annotations);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_callback(PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_GENERATOR_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals {
    PyObject *var_ctypes;
    PyObject *var_LONG;
    PyObject *var_BOOL;
    PyObject *var_HANDLE;
    PyObject *var_HMONITOR;
    PyObject *var_HDC;
    PyObject *var_RECT;
    PyObject *var_user32;
    PyObject *var_ptr_size;
    PyObject *var_WPARAM;
    PyObject *var_LPARAM;
    PyObject *var_MonitorEnumProc;
    struct Nuitka_CellObject *var_monitors;
    struct Nuitka_CellObject *var_check_primary;
    PyObject *var_callback;
    PyObject *outline_0_var___class__;
    PyObject *tmp_class_creation_1__bases;
    PyObject *tmp_class_creation_1__bases_orig;
    PyObject *tmp_class_creation_1__class_decl_dict;
    PyObject *tmp_class_creation_1__metaclass;
    PyObject *tmp_class_creation_1__prepared;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    bool tmp_result;
    PyObject *locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2;
    char const *type_description_2;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals *generator_heap = (struct screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_ctypes = NULL;
    generator_heap->var_LONG = NULL;
    generator_heap->var_BOOL = NULL;
    generator_heap->var_HANDLE = NULL;
    generator_heap->var_HMONITOR = NULL;
    generator_heap->var_HDC = NULL;
    generator_heap->var_RECT = NULL;
    generator_heap->var_user32 = NULL;
    generator_heap->var_ptr_size = NULL;
    generator_heap->var_WPARAM = NULL;
    generator_heap->var_LPARAM = NULL;
    generator_heap->var_MonitorEnumProc = NULL;
    generator_heap->var_monitors = Nuitka_Cell_Empty();
    generator_heap->var_check_primary = Nuitka_Cell_Empty();
    generator_heap->var_callback = NULL;
    generator_heap->outline_0_var___class__ = NULL;
    generator_heap->tmp_class_creation_1__bases = NULL;
    generator_heap->tmp_class_creation_1__bases_orig = NULL;
    generator_heap->tmp_class_creation_1__class_decl_dict = NULL;
    generator_heap->tmp_class_creation_1__metaclass = NULL;
    generator_heap->tmp_class_creation_1__prepared = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15 = NULL;
    generator_heap->type_description_2 = NULL;

    // Actual generator function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_1 == NULL));
        assert(generator_heap->var_ctypes == NULL);
        Py_INCREF(tmp_assign_source_1);
        generator_heap->var_ctypes = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_73df7a636feeb0714a238a1f673384f9, module_screeninfo$enumerators$cygwin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_1 = generator_heap->var_ctypes;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 9;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_LONG == NULL);
        generator_heap->var_LONG = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_2 = generator_heap->var_ctypes;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 10;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_BOOL == NULL);
        generator_heap->var_BOOL = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_3 = generator_heap->var_ctypes;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 11;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_HANDLE == NULL);
        generator_heap->var_HANDLE = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->var_HANDLE);
        tmp_assign_source_5 = generator_heap->var_HANDLE;
        assert(generator_heap->var_HMONITOR == NULL);
        Py_INCREF(tmp_assign_source_5);
        generator_heap->var_HMONITOR = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->var_HANDLE);
        tmp_assign_source_6 = generator_heap->var_HANDLE;
        assert(generator_heap->var_HDC == NULL);
        Py_INCREF(tmp_assign_source_6);
        generator_heap->var_HDC = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_4 = generator_heap->var_ctypes;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_1);
        assert(generator_heap->tmp_class_creation_1__bases_orig == NULL);
        generator_heap->tmp_class_creation_1__bases_orig = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = generator_heap->tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_8 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_class_creation_1__bases == NULL);
        generator_heap->tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyDict_New();
        assert(generator_heap->tmp_class_creation_1__class_decl_dict == NULL);
        generator_heap->tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[4];
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = generator_heap->tmp_class_creation_1__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = generator_heap->tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[4];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
        tmp_expression_value_5 = generator_heap->tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[5];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
        tmp_bases_value_1 = generator_heap->tmp_class_creation_1__bases;
        tmp_assign_source_10 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_class_creation_1__metaclass == NULL);
        generator_heap->tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[4];
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = generator_heap->tmp_class_creation_1__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_3 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
    generator_heap->tmp_dictdel_dict = generator_heap->tmp_class_creation_1__class_decl_dict;
    generator_heap->tmp_dictdel_key = mod_consts[4];
    generator_heap->tmp_result = DICT_REMOVE_ITEM(generator_heap->tmp_dictdel_dict, generator_heap->tmp_dictdel_key);
    if (generator_heap->tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 15;
        generator_heap->type_description_1 = "oooooooooooocco";
        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = generator_heap->tmp_class_creation_1__metaclass;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[6]);
        tmp_condition_result_4 = (generator_heap->tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = generator_heap->tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[7];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
        tmp_tuple_element_2 = generator_heap->tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = generator_heap->tmp_class_creation_1__class_decl_dict;
        generator->m_frame->m_frame.f_lineno = 15;
        tmp_assign_source_11 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_class_creation_1__prepared == NULL);
        generator_heap->tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__prepared);
        tmp_expression_value_8 = generator_heap->tmp_class_creation_1__prepared;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[8]);
        tmp_operand_value_1 = (generator_heap->tmp_result) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[9];
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = generator_heap->tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[10];
        tmp_getattr_default_1 = mod_consts[11];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__prepared);
            tmp_type_arg_2 = generator_heap->tmp_class_creation_1__prepared;
            tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_9 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 15;
                generator_heap->type_description_1 = "oooooooooooocco";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_2;
        }
        generator_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        generator_heap->exception_value = tmp_raise_value_1;
        generator_heap->exception_lineno = 15;
        RAISE_EXCEPTION_IMPLICIT(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "oooooooooooocco";
        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert(generator_heap->tmp_class_creation_1__prepared == NULL);
        generator_heap->tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__prepared);
            tmp_set_locals_1 = generator_heap->tmp_class_creation_1__prepared;
            generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        generator_heap->tmp_dictset_value = mod_consts[12];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15, mod_consts[13], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_4;
        }
        generator_heap->tmp_dictset_value = mod_consts[14];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15, mod_consts[15], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2)) {
            Py_XDECREF(cache_frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2 = MAKE_FUNCTION_FRAME(codeobj_b58d3b12e2a1bbf9cf957a7d22a4d87f, module_screeninfo$enumerators$cygwin, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2->m_type_description == NULL);
        generator_heap->frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2 = cache_frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2;

        // Push the new frame as the currently active one.
        pushFrameStack(generator_heap->frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(generator_heap->frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[16];
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15, mod_consts[17]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    CHECK_OBJECT(generator_heap->var_LONG);
                    tmp_tuple_element_4 = generator_heap->var_LONG;
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            generator_heap->tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[18];
                tmp_list_element_1 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15, mod_consts[17]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        CHECK_OBJECT(generator_heap->var_LONG);
                        tmp_tuple_element_5 = generator_heap->var_LONG;
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto frame_exception_exit_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 1, tmp_list_element_1);
                tmp_tuple_element_6 = mod_consts[19];
                tmp_list_element_1 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15, mod_consts[17]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        CHECK_OBJECT(generator_heap->var_LONG);
                        tmp_tuple_element_6 = generator_heap->var_LONG;
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto frame_exception_exit_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 2, tmp_list_element_1);
                tmp_tuple_element_7 = mod_consts[20];
                tmp_list_element_1 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15, mod_consts[17]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        CHECK_OBJECT(generator_heap->var_LONG);
                        tmp_tuple_element_7 = generator_heap->var_LONG;
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto frame_exception_exit_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 3, tmp_list_element_1);
            }
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15, mod_consts[21], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 16;
                generator_heap->type_description_2 = "oo";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2);
#endif

        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2,
            generator_heap->type_description_2,
            generator_heap->outline_0_var___class__,
            generator_heap->var_LONG
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2 == cache_frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2);
            cache_frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2 = NULL;
        }

        assertFrameObject(generator_heap->frame_b58d3b12e2a1bbf9cf957a7d22a4d87f_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        generator_heap->type_description_1 = "oooooooooooocco";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = generator_heap->tmp_class_creation_1__bases;
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = generator_heap->tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 15;
                generator_heap->type_description_1 = "oooooooooooocco";
                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases_orig);
        generator_heap->tmp_dictset_value = generator_heap->tmp_class_creation_1__bases_orig;
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15, mod_consts[22], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
            tmp_called_value_2 = generator_heap->tmp_class_creation_1__metaclass;
            tmp_tuple_element_8 = mod_consts[7];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
            tmp_tuple_element_8 = generator_heap->tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_8);
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = generator_heap->tmp_class_creation_1__class_decl_dict;
            generator->m_frame->m_frame.f_lineno = 15;
            tmp_assign_source_14 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 15;
                generator_heap->type_description_1 = "oooooooooooocco";
                goto try_except_handler_4;
            }
            assert(generator_heap->outline_0_var___class__ == NULL);
            generator_heap->outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(generator_heap->outline_0_var___class__);
        tmp_assign_source_13 = generator_heap->outline_0_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15);
        generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_DECREF(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15);
        generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_1;
        generator_heap->exception_value = generator_heap->exception_keeper_value_1;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(generator_heap->outline_0_var___class__);
        Py_DECREF(generator_heap->outline_0_var___class__);
        generator_heap->outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_2;
        generator_heap->exception_value = generator_heap->exception_keeper_value_2;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        generator_heap->exception_lineno = 15;
        goto try_except_handler_2;
        outline_result_1:;
        assert(generator_heap->var_RECT == NULL);
        generator_heap->var_RECT = tmp_assign_source_13;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_class_creation_1__bases_orig);
    generator_heap->tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_1__bases);
    generator_heap->tmp_class_creation_1__bases = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_1__class_decl_dict);
    generator_heap->tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_1__metaclass);
    generator_heap->tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_1__prepared);
    generator_heap->tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_1__bases_orig);
    generator_heap->tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
    Py_DECREF(generator_heap->tmp_class_creation_1__bases);
    generator_heap->tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
    Py_DECREF(generator_heap->tmp_class_creation_1__class_decl_dict);
    generator_heap->tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
    Py_DECREF(generator_heap->tmp_class_creation_1__metaclass);
    generator_heap->tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_1__prepared);
    Py_DECREF(generator_heap->tmp_class_creation_1__prepared);
    generator_heap->tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_10 = generator_heap->var_ctypes;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[23]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 23;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 23;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 23;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_user32 == NULL);
        generator_heap->var_user32 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_11 = generator_heap->var_ctypes;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[26]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 25;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_12 = generator_heap->var_ctypes;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[2]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_3);

            generator_heap->exception_lineno = 25;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 25;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 25;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_ptr_size == NULL);
        generator_heap->var_ptr_size = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(generator_heap->var_ptr_size);
        tmp_cmp_expr_left_2 = generator_heap->var_ptr_size;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_13 = generator_heap->var_ctypes;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[26]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_14 = generator_heap->var_ctypes;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[27]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_4);

            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 26;
        tmp_cmp_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_15 = generator_heap->var_ctypes;
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[28]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 27;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_WPARAM == NULL);
        generator_heap->var_WPARAM = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_16 = generator_heap->var_ctypes;
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[27]);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 28;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_LPARAM == NULL);
        generator_heap->var_LPARAM = tmp_assign_source_18;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(generator_heap->var_ptr_size);
        tmp_cmp_expr_left_3 = generator_heap->var_ptr_size;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_17 = generator_heap->var_ctypes;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[26]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 29;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_18 = generator_heap->var_ctypes;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[29]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_5);

            generator_heap->exception_lineno = 29;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 29;
        tmp_cmp_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 29;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 29;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_19 = generator_heap->var_ctypes;
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[30]);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 30;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_WPARAM == NULL);
        generator_heap->var_WPARAM = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_20 = generator_heap->var_ctypes;
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[29]);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_LPARAM == NULL);
        generator_heap->var_LPARAM = tmp_assign_source_20;
    }
    branch_no_6:;
    branch_end_5:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_21 = generator_heap->var_ctypes;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[31]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 33;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_BOOL);
        tmp_args_element_value_4 = generator_heap->var_BOOL;
        CHECK_OBJECT(generator_heap->var_HMONITOR);
        tmp_args_element_value_5 = generator_heap->var_HMONITOR;
        CHECK_OBJECT(generator_heap->var_HDC);
        tmp_args_element_value_6 = generator_heap->var_HDC;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_called_instance_2 = generator_heap->var_ctypes;
        CHECK_OBJECT(generator_heap->var_RECT);
        tmp_args_element_value_8 = generator_heap->var_RECT;
        generator->m_frame->m_frame.f_lineno = 34;
        tmp_args_element_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[32], tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_6);

            generator_heap->exception_lineno = 34;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_LPARAM == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 34;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = generator_heap->var_LPARAM;
        generator->m_frame->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_9};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 33;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_MonitorEnumProc == NULL);
        generator_heap->var_MonitorEnumProc = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(generator_heap->var_HANDLE);
        tmp_list_element_2 = generator_heap->var_HANDLE;
        tmp_assattr_value_1 = PyList_New(4);
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_10;
            PyList_SET_ITEM0(tmp_assattr_value_1, 0, tmp_list_element_2);
            CHECK_OBJECT(generator_heap->var_ctypes);
            tmp_called_instance_3 = generator_heap->var_ctypes;
            CHECK_OBJECT(generator_heap->var_RECT);
            tmp_args_element_value_10 = generator_heap->var_RECT;
            generator->m_frame->m_frame.f_lineno = 39;
            tmp_list_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[32], tmp_args_element_value_10);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 39;
                generator_heap->type_description_1 = "oooooooooooocco";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_value_1, 1, tmp_list_element_2);
            CHECK_OBJECT(generator_heap->var_MonitorEnumProc);
            tmp_list_element_2 = generator_heap->var_MonitorEnumProc;
            PyList_SET_ITEM0(tmp_assattr_value_1, 2, tmp_list_element_2);
            if (generator_heap->var_LPARAM == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 41;
                generator_heap->type_description_1 = "oooooooooooocco";
                goto list_build_exception_1;
            }

            tmp_list_element_2 = generator_heap->var_LPARAM;
            PyList_SET_ITEM0(tmp_assattr_value_1, 3, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        CHECK_OBJECT(generator_heap->var_user32);
        tmp_expression_value_22 = generator_heap->var_user32;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[34]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            generator_heap->exception_lineno = 37;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 37;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_23 = generator_heap->var_ctypes;
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[36]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_user32);
        tmp_expression_value_24 = generator_heap->var_user32;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[34]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_2);

            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[37], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyList_New(0);
        assert(Nuitka_Cell_GET(generator_heap->var_monitors) == NULL);
        PyCell_SET(generator_heap->var_monitors, tmp_assign_source_22);

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_25;
        tmp_dict_key_1 = mod_consts[38];
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_expression_value_25 == NULL));
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[40]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 47;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(generator_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[41];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(generator_heap->tmp_res != 0));


        tmp_assign_source_23 = MAKE_FUNCTION_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary(tmp_annotations_1);

        assert(Nuitka_Cell_GET(generator_heap->var_check_primary) == NULL);
        PyCell_SET(generator_heap->var_check_primary, tmp_assign_source_23);

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_26;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_dict_key_2 = mod_consts[44];
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_expression_value_26 == NULL));
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[40]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 50;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[45];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
            }

            assert(!(tmp_expression_value_27 == NULL));
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[40]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 50;
                generator_heap->type_description_1 = "oooooooooooocco";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[46];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
            }

            assert(!(tmp_expression_value_28 == NULL));
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[40]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 50;
                generator_heap->type_description_1 = "oooooooooooocco";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[47];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
            }

            assert(!(tmp_expression_value_29 == NULL));
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[40]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 50;
                generator_heap->type_description_1 = "oooooooooooocco";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[41];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = generator_heap->var_check_primary;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = generator_heap->var_monitors;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_24 = MAKE_FUNCTION_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_callback(tmp_annotations_2, tmp_closure_1);

        assert(generator_heap->var_callback == NULL);
        generator_heap->var_callback = tmp_assign_source_24;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(generator_heap->var_user32);
        tmp_expression_value_30 = generator_heap->var_user32;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[34]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 63;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = Py_None;
        tmp_args_element_value_12 = Py_None;
        CHECK_OBJECT(generator_heap->var_MonitorEnumProc);
        tmp_called_value_8 = generator_heap->var_MonitorEnumProc;
        CHECK_OBJECT(generator_heap->var_callback);
        tmp_args_element_value_14 = generator_heap->var_callback;
        generator->m_frame->m_frame.f_lineno = 63;
        tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_14);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_7);

            generator_heap->exception_lineno = 63;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[5];
        generator->m_frame->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_15};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 63;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_31;
        PyObject *tmp_yieldfrom_result_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_monitors));
        tmp_expression_value_31 = Nuitka_Cell_GET(generator_heap->var_monitors);
        Py_INCREF(tmp_expression_value_31);
        generator->m_yield_return_index = 1;
        generator->m_yieldfrom = tmp_expression_value_31;
        return NULL;

        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 65;
            generator_heap->type_description_1 = "oooooooooooocco";
            goto frame_exception_exit_1;
        }
        tmp_yieldfrom_result_1 = yield_return_value;
        Py_DECREF(tmp_yieldfrom_result_1);
    }

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_2;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator_heap->var_ctypes,
            generator_heap->var_LONG,
            generator_heap->var_BOOL,
            generator_heap->var_HANDLE,
            generator_heap->var_HMONITOR,
            generator_heap->var_HDC,
            generator_heap->var_RECT,
            generator_heap->var_user32,
            generator_heap->var_ptr_size,
            generator_heap->var_WPARAM,
            generator_heap->var_LPARAM,
            generator_heap->var_MonitorEnumProc,
            generator_heap->var_monitors,
            generator_heap->var_check_primary,
            generator_heap->var_callback
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->var_ctypes);
    Py_DECREF(generator_heap->var_ctypes);
    generator_heap->var_ctypes = NULL;
    Py_XDECREF(generator_heap->var_LONG);
    generator_heap->var_LONG = NULL;
    Py_XDECREF(generator_heap->var_BOOL);
    generator_heap->var_BOOL = NULL;
    Py_XDECREF(generator_heap->var_HANDLE);
    generator_heap->var_HANDLE = NULL;
    Py_XDECREF(generator_heap->var_HMONITOR);
    generator_heap->var_HMONITOR = NULL;
    Py_XDECREF(generator_heap->var_HDC);
    generator_heap->var_HDC = NULL;
    Py_XDECREF(generator_heap->var_RECT);
    generator_heap->var_RECT = NULL;
    Py_XDECREF(generator_heap->var_user32);
    generator_heap->var_user32 = NULL;
    Py_XDECREF(generator_heap->var_ptr_size);
    generator_heap->var_ptr_size = NULL;
    Py_XDECREF(generator_heap->var_WPARAM);
    generator_heap->var_WPARAM = NULL;
    Py_XDECREF(generator_heap->var_LPARAM);
    generator_heap->var_LPARAM = NULL;
    Py_XDECREF(generator_heap->var_MonitorEnumProc);
    generator_heap->var_MonitorEnumProc = NULL;
    CHECK_OBJECT(generator_heap->var_monitors);
    Py_DECREF(generator_heap->var_monitors);
    generator_heap->var_monitors = NULL;
    CHECK_OBJECT(generator_heap->var_check_primary);
    Py_DECREF(generator_heap->var_check_primary);
    generator_heap->var_check_primary = NULL;
    Py_XDECREF(generator_heap->var_callback);
    generator_heap->var_callback = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->var_ctypes);
    Py_DECREF(generator_heap->var_ctypes);
    generator_heap->var_ctypes = NULL;
    CHECK_OBJECT(generator_heap->var_LONG);
    Py_DECREF(generator_heap->var_LONG);
    generator_heap->var_LONG = NULL;
    CHECK_OBJECT(generator_heap->var_BOOL);
    Py_DECREF(generator_heap->var_BOOL);
    generator_heap->var_BOOL = NULL;
    CHECK_OBJECT(generator_heap->var_HANDLE);
    Py_DECREF(generator_heap->var_HANDLE);
    generator_heap->var_HANDLE = NULL;
    CHECK_OBJECT(generator_heap->var_HMONITOR);
    Py_DECREF(generator_heap->var_HMONITOR);
    generator_heap->var_HMONITOR = NULL;
    CHECK_OBJECT(generator_heap->var_HDC);
    Py_DECREF(generator_heap->var_HDC);
    generator_heap->var_HDC = NULL;
    CHECK_OBJECT(generator_heap->var_RECT);
    Py_DECREF(generator_heap->var_RECT);
    generator_heap->var_RECT = NULL;
    CHECK_OBJECT(generator_heap->var_user32);
    Py_DECREF(generator_heap->var_user32);
    generator_heap->var_user32 = NULL;
    CHECK_OBJECT(generator_heap->var_ptr_size);
    Py_DECREF(generator_heap->var_ptr_size);
    generator_heap->var_ptr_size = NULL;
    Py_XDECREF(generator_heap->var_WPARAM);
    generator_heap->var_WPARAM = NULL;
    Py_XDECREF(generator_heap->var_LPARAM);
    generator_heap->var_LPARAM = NULL;
    CHECK_OBJECT(generator_heap->var_MonitorEnumProc);
    Py_DECREF(generator_heap->var_MonitorEnumProc);
    generator_heap->var_MonitorEnumProc = NULL;
    CHECK_OBJECT(generator_heap->var_monitors);
    Py_DECREF(generator_heap->var_monitors);
    generator_heap->var_monitors = NULL;
    CHECK_OBJECT(generator_heap->var_check_primary);
    Py_DECREF(generator_heap->var_check_primary);
    generator_heap->var_check_primary = NULL;
    CHECK_OBJECT(generator_heap->var_callback);
    Py_DECREF(generator_heap->var_callback);
    generator_heap->var_callback = NULL;

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15);

    return NULL;

    function_exception_exit:
    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_RECT_15);
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors() {
    return Nuitka_Generator_New(
        screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_context,
        module_screeninfo$enumerators$cygwin,
        mod_consts[50],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_73df7a636feeb0714a238a1f673384f9,
        NULL,
        0,
        sizeof(struct screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals)
    );
}


static PyObject *impl_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rct = python_pars[0];
    struct Nuitka_FrameObject *frame_93da6bcfa15d3e3ec30afa1d896e67cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_93da6bcfa15d3e3ec30afa1d896e67cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_93da6bcfa15d3e3ec30afa1d896e67cd)) {
        Py_XDECREF(cache_frame_93da6bcfa15d3e3ec30afa1d896e67cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_93da6bcfa15d3e3ec30afa1d896e67cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_93da6bcfa15d3e3ec30afa1d896e67cd = MAKE_FUNCTION_FRAME(codeobj_93da6bcfa15d3e3ec30afa1d896e67cd, module_screeninfo$enumerators$cygwin, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_93da6bcfa15d3e3ec30afa1d896e67cd->m_type_description == NULL);
    frame_93da6bcfa15d3e3ec30afa1d896e67cd = cache_frame_93da6bcfa15d3e3ec30afa1d896e67cd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_93da6bcfa15d3e3ec30afa1d896e67cd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_93da6bcfa15d3e3ec30afa1d896e67cd) == 2); // Frame stack

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_rct);
        tmp_expression_value_1 = par_rct;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[5];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(par_rct);
        tmp_expression_value_2 = par_rct;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[5];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_93da6bcfa15d3e3ec30afa1d896e67cd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_93da6bcfa15d3e3ec30afa1d896e67cd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_93da6bcfa15d3e3ec30afa1d896e67cd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_93da6bcfa15d3e3ec30afa1d896e67cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_93da6bcfa15d3e3ec30afa1d896e67cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_93da6bcfa15d3e3ec30afa1d896e67cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_93da6bcfa15d3e3ec30afa1d896e67cd,
        type_description_1,
        par_rct
    );


    // Release cached frame if used for exception.
    if (frame_93da6bcfa15d3e3ec30afa1d896e67cd == cache_frame_93da6bcfa15d3e3ec30afa1d896e67cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_93da6bcfa15d3e3ec30afa1d896e67cd);
        cache_frame_93da6bcfa15d3e3ec30afa1d896e67cd = NULL;
    }

    assertFrameObject(frame_93da6bcfa15d3e3ec30afa1d896e67cd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rct);
    Py_DECREF(par_rct);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rct);
    Py_DECREF(par_rct);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_callback(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_monitor = python_pars[0];
    PyObject *par_dc = python_pars[1];
    PyObject *par_rect = python_pars[2];
    PyObject *par_data = python_pars[3];
    PyObject *var_rct = NULL;
    struct Nuitka_FrameObject *frame_e95ba53c0e8a8fa5b64b119eb7f531a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e95ba53c0e8a8fa5b64b119eb7f531a2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e95ba53c0e8a8fa5b64b119eb7f531a2)) {
        Py_XDECREF(cache_frame_e95ba53c0e8a8fa5b64b119eb7f531a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e95ba53c0e8a8fa5b64b119eb7f531a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e95ba53c0e8a8fa5b64b119eb7f531a2 = MAKE_FUNCTION_FRAME(codeobj_e95ba53c0e8a8fa5b64b119eb7f531a2, module_screeninfo$enumerators$cygwin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e95ba53c0e8a8fa5b64b119eb7f531a2->m_type_description == NULL);
    frame_e95ba53c0e8a8fa5b64b119eb7f531a2 = cache_frame_e95ba53c0e8a8fa5b64b119eb7f531a2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e95ba53c0e8a8fa5b64b119eb7f531a2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e95ba53c0e8a8fa5b64b119eb7f531a2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_rect);
        tmp_expression_value_1 = par_rect;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        assert(var_rct == NULL);
        var_rct = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[53]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 53;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rct);
        tmp_expression_value_3 = var_rct;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[16]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 54;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rct);
        tmp_expression_value_4 = var_rct;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 55;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rct);
        tmp_expression_value_5 = var_rct;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[19]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 56;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rct);
        tmp_expression_value_6 = var_rct;
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[16]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 56;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 56;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rct);
        tmp_expression_value_7 = var_rct;
        tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[20]);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 57;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rct);
        tmp_expression_value_8 = var_rct;
        tmp_sub_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[18]);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 57;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 57;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_rct);
        tmp_args_element_value_2 = var_rct;
        frame_e95ba53c0e8a8fa5b64b119eb7f531a2->m_frame.f_lineno = 58;
        tmp_kw_call_value_4_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 58;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        frame_e95ba53c0e8a8fa5b64b119eb7f531a2->m_frame.f_lineno = 53;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_args_element_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[55]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 53;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        frame_e95ba53c0e8a8fa5b64b119eb7f531a2->m_frame.f_lineno = 52;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e95ba53c0e8a8fa5b64b119eb7f531a2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e95ba53c0e8a8fa5b64b119eb7f531a2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e95ba53c0e8a8fa5b64b119eb7f531a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e95ba53c0e8a8fa5b64b119eb7f531a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e95ba53c0e8a8fa5b64b119eb7f531a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e95ba53c0e8a8fa5b64b119eb7f531a2,
        type_description_1,
        par_monitor,
        par_dc,
        par_rect,
        par_data,
        var_rct,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e95ba53c0e8a8fa5b64b119eb7f531a2 == cache_frame_e95ba53c0e8a8fa5b64b119eb7f531a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e95ba53c0e8a8fa5b64b119eb7f531a2);
        cache_frame_e95ba53c0e8a8fa5b64b119eb7f531a2 = NULL;
    }

    assertFrameObject(frame_e95ba53c0e8a8fa5b64b119eb7f531a2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = mod_consts[56];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_rct);
    Py_DECREF(var_rct);
    var_rct = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_rct);
    var_rct = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_monitor);
    Py_DECREF(par_monitor);
    CHECK_OBJECT(par_dc);
    Py_DECREF(par_dc);
    CHECK_OBJECT(par_rect);
    Py_DECREF(par_rect);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_monitor);
    Py_DECREF(par_monitor);
    CHECK_OBJECT(par_dc);
    Py_DECREF(par_dc);
    CHECK_OBJECT(par_rect);
    Py_DECREF(par_rect);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_73df7a636feeb0714a238a1f673384f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$cygwin,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[43],
#endif
        codeobj_93da6bcfa15d3e3ec30afa1d896e67cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$cygwin,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_callback(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_callback,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_e95ba53c0e8a8fa5b64b119eb7f531a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$cygwin,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_screeninfo$enumerators$cygwin[] = {
    impl_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary,
    impl_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_callback,
    impl_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_screeninfo$enumerators$cygwin;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_screeninfo$enumerators$cygwin) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_screeninfo$enumerators$cygwin[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_screeninfo$enumerators$cygwin,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_screeninfo$enumerators$cygwin(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("screeninfo.enumerators.cygwin");

    // Store the module for future use.
    module_screeninfo$enumerators$cygwin = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("screeninfo.enumerators.cygwin: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("screeninfo.enumerators.cygwin: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("screeninfo.enumerators.cygwin: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscreeninfo$enumerators$cygwin\n");

    moduledict_screeninfo$enumerators$cygwin = MODULE_DICT(module_screeninfo$enumerators$cygwin);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_screeninfo$enumerators$cygwin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_screeninfo$enumerators$cygwin,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[73]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_screeninfo$enumerators$cygwin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_screeninfo$enumerators$cygwin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_screeninfo$enumerators$cygwin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_screeninfo$enumerators$cygwin);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_screeninfo$enumerators$cygwin);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_9e230b1bfa4c9829696227c5ad6b1a1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_9e230b1bfa4c9829696227c5ad6b1a1d = MAKE_MODULE_FRAME(codeobj_9e230b1bfa4c9829696227c5ad6b1a1d, module_screeninfo$enumerators$cygwin);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_9e230b1bfa4c9829696227c5ad6b1a1d);
    assert(Py_REFCNT(frame_9e230b1bfa4c9829696227c5ad6b1a1d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[60], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[61], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[63];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_screeninfo$enumerators$cygwin;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[64];
        tmp_level_value_1 = mod_consts[5];
        frame_9e230b1bfa4c9829696227c5ad6b1a1d->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_screeninfo$enumerators$cygwin,
                mod_consts[54],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_1 = mod_consts[41];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[65]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_1 == NULL)) {
            tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_subscript_value_1 == NULL));
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_6 = MAKE_FUNCTION_screeninfo$enumerators$cygwin$$$function__1_enumerate_monitors(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_6);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9e230b1bfa4c9829696227c5ad6b1a1d);
#endif
    popFrameStack();

    assertFrameObject(frame_9e230b1bfa4c9829696227c5ad6b1a1d);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9e230b1bfa4c9829696227c5ad6b1a1d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9e230b1bfa4c9829696227c5ad6b1a1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e230b1bfa4c9829696227c5ad6b1a1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e230b1bfa4c9829696227c5ad6b1a1d, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("screeninfo.enumerators.cygwin", false);

    Py_INCREF(module_screeninfo$enumerators$cygwin);
    return module_screeninfo$enumerators$cygwin;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$cygwin, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("screeninfo$enumerators$cygwin", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}