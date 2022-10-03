/* Generated code for Python module 'screeninfo.enumerators.drm'
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

/* The "module_screeninfo$enumerators$drm" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_screeninfo$enumerators$drm;
PyDictObject *moduledict_screeninfo$enumerators$drm;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[246];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[246];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("screeninfo.enumerators.drm"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 246; i++) {
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
void checkModuleConstants_screeninfo$enumerators$drm(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 246; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_3df3a5864c73dafd848450b2c260d7ef;
static PyCodeObject *codeobj_0a0608a509250893b613615071819c69;
static PyCodeObject *codeobj_a1476a3b471ab26330b202093dbfe363;
static PyCodeObject *codeobj_052b5b823acc7db183cca0945a028019;
static PyCodeObject *codeobj_5f63aa2fbbc2753a6192774459c11106;
static PyCodeObject *codeobj_e0999572f54b6dfd91c45924005e2d24;
static PyCodeObject *codeobj_2d3db624e703d602c65ed8b793ab6b95;
static PyCodeObject *codeobj_78e2289451c7fc0671042c1b60e5252d;
static PyCodeObject *codeobj_055477107cd12df5acebebe7cdc1159c;
static PyCodeObject *codeobj_e19aac7b77237ddfdde4e064a91b3fa2;
static PyCodeObject *codeobj_229960fc1208a33c11cd4d708ebded1a;
static PyCodeObject *codeobj_e50f7dadadd2d3851ee8ae7d80226d25;
static PyCodeObject *codeobj_12d5c745d97149b2926377672414c39b;
static PyCodeObject *codeobj_03d9739bdb31790bc9e7850142df0e96;
static PyCodeObject *codeobj_53b89a6a8d2a1ad7b53f39b116364dd2;
static PyCodeObject *codeobj_e4bbcab7e4937e96e5dfb68cd20d6b48;
static PyCodeObject *codeobj_4c083e771e53fc4b81c611a110b28d5d;
static PyCodeObject *codeobj_a65e296f76748e52377ad0c3394db221;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[231]); CHECK_OBJECT(module_filename_obj);
    codeobj_3df3a5864c73dafd848450b2c260d7ef = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[232], NULL, NULL, 0, 0, 0);
    codeobj_0a0608a509250893b613615071819c69 = MAKE_CODEOBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NOFREE, mod_consts[9], mod_consts[233], NULL, 0, 0, 0);
    codeobj_a1476a3b471ab26330b202093dbfe363 = MAKE_CODEOBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NOFREE, mod_consts[50], mod_consts[234], NULL, 0, 0, 0);
    codeobj_052b5b823acc7db183cca0945a028019 = MAKE_CODEOBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NOFREE, mod_consts[47], mod_consts[234], NULL, 0, 0, 0);
    codeobj_5f63aa2fbbc2753a6192774459c11106 = MAKE_CODEOBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NOFREE, mod_consts[142], mod_consts[235], NULL, 0, 0, 0);
    codeobj_e0999572f54b6dfd91c45924005e2d24 = MAKE_CODEOBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NOFREE, mod_consts[53], mod_consts[235], NULL, 0, 0, 0);
    codeobj_2d3db624e703d602c65ed8b793ab6b95 = MAKE_CODEOBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NOFREE, mod_consts[21], mod_consts[235], NULL, 0, 0, 0);
    codeobj_78e2289451c7fc0671042c1b60e5252d = MAKE_CODEOBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[236], mod_consts[237], 1, 0, 0);
    codeobj_055477107cd12df5acebebe7cdc1159c = MAKE_CODEOBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[236], mod_consts[237], 1, 0, 0);
    codeobj_e19aac7b77237ddfdde4e064a91b3fa2 = MAKE_CODEOBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[236], mod_consts[237], 1, 0, 0);
    codeobj_229960fc1208a33c11cd4d708ebded1a = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[236], mod_consts[237], 1, 0, 0);
    codeobj_e50f7dadadd2d3851ee8ae7d80226d25 = MAKE_CODEOBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[236], mod_consts[237], 1, 0, 0);
    codeobj_12d5c745d97149b2926377672414c39b = MAKE_CODEOBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[51], mod_consts[238], mod_consts[239], 1, 0, 0);
    codeobj_03d9739bdb31790bc9e7850142df0e96 = MAKE_CODEOBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[152], mod_consts[240], mod_consts[239], 1, 0, 0);
    codeobj_53b89a6a8d2a1ad7b53f39b116364dd2 = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[241], mod_consts[239], 1, 0, 0);
    codeobj_e4bbcab7e4937e96e5dfb68cd20d6b48 = MAKE_CODEOBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[143], mod_consts[242], mod_consts[239], 1, 0, 0);
    codeobj_4c083e771e53fc4b81c611a110b28d5d = MAKE_CODEOBJECT(module_filename_obj, 7, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[243], NULL, 0, 0, 0);
    codeobj_a65e296f76748e52377ad0c3394db221 = MAKE_CODEOBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[176], mod_consts[244], mod_consts[245], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors();


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors(PyObject *annotations);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__10_get_connector_name(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1___del__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_crtcs(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__3_connectors(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__4___del__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__5___del__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__6_encoder(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__7___del__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__8_crtc(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__9___del__(PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_GENERATOR_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors();

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



struct screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals {
    struct Nuitka_CellObject *var_ctypes;
    PyObject *var_load_library;
    struct Nuitka_CellObject *var_libdrm;
    PyObject *var_DrmBase;
    PyObject *var_DrmModeRes;
    PyObject *var_DrmModeModeInfo;
    struct Nuitka_CellObject *var_DrmModeConnector;
    PyObject *var_DrmModeEncoder;
    PyObject *var_DrmModeCrtc;
    PyObject *var_DRM_DEV_NAME;
    PyObject *var_get_connector_name;
    PyObject *var_card_no;
    PyObject *var_card_path;
    PyObject *var_fd;
    PyObject *var_res;
    PyObject *var_connector;
    PyObject *var_crtc;
    PyObject *outline_0_var___class__;
    PyObject *outline_1_var___class__;
    PyObject *outline_2_var___class__;
    PyObject *outline_3_var___class__;
    PyObject *outline_4_var___class__;
    PyObject *outline_5_var___class__;
    PyObject *tmp_class_creation_1__bases;
    PyObject *tmp_class_creation_1__bases_orig;
    PyObject *tmp_class_creation_1__class_decl_dict;
    PyObject *tmp_class_creation_1__metaclass;
    PyObject *tmp_class_creation_1__prepared;
    PyObject *tmp_class_creation_2__bases;
    PyObject *tmp_class_creation_2__bases_orig;
    PyObject *tmp_class_creation_2__class_decl_dict;
    PyObject *tmp_class_creation_2__metaclass;
    PyObject *tmp_class_creation_2__prepared;
    PyObject *tmp_class_creation_3__bases;
    PyObject *tmp_class_creation_3__bases_orig;
    PyObject *tmp_class_creation_3__class_decl_dict;
    PyObject *tmp_class_creation_3__metaclass;
    PyObject *tmp_class_creation_3__prepared;
    PyObject *tmp_class_creation_4__bases;
    PyObject *tmp_class_creation_4__bases_orig;
    PyObject *tmp_class_creation_4__class_decl_dict;
    PyObject *tmp_class_creation_4__metaclass;
    PyObject *tmp_class_creation_4__prepared;
    PyObject *tmp_class_creation_5__bases;
    PyObject *tmp_class_creation_5__bases_orig;
    PyObject *tmp_class_creation_5__class_decl_dict;
    PyObject *tmp_class_creation_5__metaclass;
    PyObject *tmp_class_creation_5__prepared;
    PyObject *tmp_class_creation_6__bases;
    PyObject *tmp_class_creation_6__bases_orig;
    PyObject *tmp_class_creation_6__class_decl_dict;
    PyObject *tmp_class_creation_6__metaclass;
    PyObject *tmp_class_creation_6__prepared;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    bool tmp_result;
    PyObject *locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0a0608a509250893b613615071819c69_2;
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
    PyObject *locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19;
    struct Nuitka_FrameObject *frame_2d3db624e703d602c65ed8b793ab6b95_3;
    char const *type_description_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64;
    struct Nuitka_FrameObject *frame_e0999572f54b6dfd91c45924005e2d24_4;
    char const *type_description_4;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    PyObject *locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89;
    struct Nuitka_FrameObject *frame_a1476a3b471ab26330b202093dbfe363_5;
    char const *type_description_5;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    int exception_keeper_lineno_12;
    PyObject *locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154;
    struct Nuitka_FrameObject *frame_5f63aa2fbbc2753a6192774459c11106_6;
    char const *type_description_6;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    int exception_keeper_lineno_15;
    PyObject *locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174;
    struct Nuitka_FrameObject *frame_052b5b823acc7db183cca0945a028019_7;
    char const *type_description_7;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    int exception_keeper_lineno_19;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    int exception_keeper_lineno_20;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    int exception_keeper_lineno_22;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    int exception_keeper_lineno_25;
};

static PyObject *screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals *generator_heap = (struct screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_frame_0a0608a509250893b613615071819c69_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2d3db624e703d602c65ed8b793ab6b95_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e0999572f54b6dfd91c45924005e2d24_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a1476a3b471ab26330b202093dbfe363_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5f63aa2fbbc2753a6192774459c11106_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_052b5b823acc7db183cca0945a028019_7 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_ctypes = Nuitka_Cell_Empty();
    generator_heap->var_load_library = NULL;
    generator_heap->var_libdrm = Nuitka_Cell_Empty();
    generator_heap->var_DrmBase = NULL;
    generator_heap->var_DrmModeRes = NULL;
    generator_heap->var_DrmModeModeInfo = NULL;
    generator_heap->var_DrmModeConnector = Nuitka_Cell_Empty();
    generator_heap->var_DrmModeEncoder = NULL;
    generator_heap->var_DrmModeCrtc = NULL;
    generator_heap->var_DRM_DEV_NAME = NULL;
    generator_heap->var_get_connector_name = NULL;
    generator_heap->var_card_no = NULL;
    generator_heap->var_card_path = NULL;
    generator_heap->var_fd = NULL;
    generator_heap->var_res = NULL;
    generator_heap->var_connector = NULL;
    generator_heap->var_crtc = NULL;
    generator_heap->outline_0_var___class__ = NULL;
    generator_heap->outline_1_var___class__ = NULL;
    generator_heap->outline_2_var___class__ = NULL;
    generator_heap->outline_3_var___class__ = NULL;
    generator_heap->outline_4_var___class__ = NULL;
    generator_heap->outline_5_var___class__ = NULL;
    generator_heap->tmp_class_creation_1__bases = NULL;
    generator_heap->tmp_class_creation_1__bases_orig = NULL;
    generator_heap->tmp_class_creation_1__class_decl_dict = NULL;
    generator_heap->tmp_class_creation_1__metaclass = NULL;
    generator_heap->tmp_class_creation_1__prepared = NULL;
    generator_heap->tmp_class_creation_2__bases = NULL;
    generator_heap->tmp_class_creation_2__bases_orig = NULL;
    generator_heap->tmp_class_creation_2__class_decl_dict = NULL;
    generator_heap->tmp_class_creation_2__metaclass = NULL;
    generator_heap->tmp_class_creation_2__prepared = NULL;
    generator_heap->tmp_class_creation_3__bases = NULL;
    generator_heap->tmp_class_creation_3__bases_orig = NULL;
    generator_heap->tmp_class_creation_3__class_decl_dict = NULL;
    generator_heap->tmp_class_creation_3__metaclass = NULL;
    generator_heap->tmp_class_creation_3__prepared = NULL;
    generator_heap->tmp_class_creation_4__bases = NULL;
    generator_heap->tmp_class_creation_4__bases_orig = NULL;
    generator_heap->tmp_class_creation_4__class_decl_dict = NULL;
    generator_heap->tmp_class_creation_4__metaclass = NULL;
    generator_heap->tmp_class_creation_4__prepared = NULL;
    generator_heap->tmp_class_creation_5__bases = NULL;
    generator_heap->tmp_class_creation_5__bases_orig = NULL;
    generator_heap->tmp_class_creation_5__class_decl_dict = NULL;
    generator_heap->tmp_class_creation_5__metaclass = NULL;
    generator_heap->tmp_class_creation_5__prepared = NULL;
    generator_heap->tmp_class_creation_6__bases = NULL;
    generator_heap->tmp_class_creation_6__bases_orig = NULL;
    generator_heap->tmp_class_creation_6__class_decl_dict = NULL;
    generator_heap->tmp_class_creation_6__metaclass = NULL;
    generator_heap->tmp_class_creation_6__prepared = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15 = NULL;
    generator_heap->type_description_2 = NULL;
    generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19 = NULL;
    generator_heap->type_description_3 = NULL;
    generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64 = NULL;
    generator_heap->type_description_4 = NULL;
    generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89 = NULL;
    generator_heap->type_description_5 = NULL;
    generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154 = NULL;
    generator_heap->type_description_6 = NULL;
    generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174 = NULL;
    generator_heap->type_description_7 = NULL;

    // Actual generator function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_1 == NULL));
        assert(Nuitka_Cell_GET(generator_heap->var_ctypes) == NULL);
        Py_INCREF(tmp_assign_source_1);
        PyCell_SET(generator_heap->var_ctypes, tmp_assign_source_1);

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4c083e771e53fc4b81c611a110b28d5d, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_screeninfo$enumerators$drm;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        generator->m_frame->m_frame.f_lineno = 9;
        tmp_assign_source_2 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 9;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_ctypes);
            PyCell_SET(generator_heap->var_ctypes, tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[2];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_screeninfo$enumerators$drm;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[3];
        tmp_level_value_2 = mod_consts[1];
        generator->m_frame->m_frame.f_lineno = 11;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 11;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_screeninfo$enumerators$drm,
                mod_consts[4],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 11;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_load_library == NULL);
        generator_heap->var_load_library = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(generator_heap->var_load_library);
        tmp_called_value_1 = generator_heap->var_load_library;
        generator->m_frame->m_frame.f_lineno = 13;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[5]);

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 13;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(generator_heap->var_libdrm) == NULL);
        PyCell_SET(generator_heap->var_libdrm, tmp_assign_source_4);

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_expression_value_1 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 0, tmp_tuple_element_1);
        assert(generator_heap->tmp_class_creation_1__bases_orig == NULL);
        generator_heap->tmp_class_creation_1__bases_orig = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = generator_heap->tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_6 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_class_creation_1__bases == NULL);
        generator_heap->tmp_class_creation_1__bases = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyDict_New();
        assert(generator_heap->tmp_class_creation_1__class_decl_dict == NULL);
        generator_heap->tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[7];
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
        tmp_key_value_2 = mod_consts[7];
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
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
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
        tmp_expression_value_2 = generator_heap->tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
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
        tmp_assign_source_8 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_class_creation_1__metaclass == NULL);
        generator_heap->tmp_class_creation_1__metaclass = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[7];
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
    generator_heap->tmp_dictdel_key = mod_consts[7];
    generator_heap->tmp_result = DICT_REMOVE_ITEM(generator_heap->tmp_dictdel_dict, generator_heap->tmp_dictdel_key);
    if (generator_heap->tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 15;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = generator_heap->tmp_class_creation_1__metaclass;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[8]);
        tmp_condition_result_4 = (generator_heap->tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = generator_heap->tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[9];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
        tmp_tuple_element_2 = generator_heap->tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = generator_heap->tmp_class_creation_1__class_decl_dict;
        generator->m_frame->m_frame.f_lineno = 15;
        tmp_assign_source_9 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_class_creation_1__prepared == NULL);
        generator_heap->tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__prepared);
        tmp_expression_value_5 = generator_heap->tmp_class_creation_1__prepared;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[10]);
        tmp_operand_value_1 = (generator_heap->tmp_result) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
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
        tmp_mod_expr_left_1 = mod_consts[11];
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = generator_heap->tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[12];
        tmp_getattr_default_1 = mod_consts[13];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__prepared);
            tmp_type_arg_2 = generator_heap->tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[12]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 15;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
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
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_2;
        }
        generator_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        generator_heap->exception_value = tmp_raise_value_1;
        generator_heap->exception_lineno = 15;
        RAISE_EXCEPTION_IMPLICIT(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyDict_New();
        assert(generator_heap->tmp_class_creation_1__prepared == NULL);
        generator_heap->tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__prepared);
            tmp_set_locals_1 = generator_heap->tmp_class_creation_1__prepared;
            generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        generator_heap->tmp_dictset_value = mod_consts[14];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15, mod_consts[15], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_4;
        }
        generator_heap->tmp_dictset_value = mod_consts[16];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15, mod_consts[17], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_0a0608a509250893b613615071819c69_2)) {
            Py_XDECREF(cache_frame_0a0608a509250893b613615071819c69_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0a0608a509250893b613615071819c69_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0a0608a509250893b613615071819c69_2 = MAKE_FUNCTION_FRAME(codeobj_0a0608a509250893b613615071819c69, module_screeninfo$enumerators$drm, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0a0608a509250893b613615071819c69_2->m_type_description == NULL);
        generator_heap->frame_0a0608a509250893b613615071819c69_2 = cache_frame_0a0608a509250893b613615071819c69_2;

        // Push the new frame as the currently active one.
        pushFrameStack(generator_heap->frame_0a0608a509250893b613615071819c69_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(generator_heap->frame_0a0608a509250893b613615071819c69_2) == 2); // Frame stack

        // Framed code:
        generator_heap->tmp_dictset_value = Py_None;
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15, mod_consts[18], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 16;
            generator_heap->type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        generator_heap->tmp_dictset_value = Py_False;
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15, mod_consts[19], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 17;
            generator_heap->type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_0a0608a509250893b613615071819c69_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_0a0608a509250893b613615071819c69_2);
#endif

        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_0a0608a509250893b613615071819c69_2, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_0a0608a509250893b613615071819c69_2->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_0a0608a509250893b613615071819c69_2, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_0a0608a509250893b613615071819c69_2,
            generator_heap->type_description_2,
            generator_heap->outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_0a0608a509250893b613615071819c69_2 == cache_frame_0a0608a509250893b613615071819c69_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0a0608a509250893b613615071819c69_2);
            cache_frame_0a0608a509250893b613615071819c69_2 = NULL;
        }

        assertFrameObject(generator_heap->frame_0a0608a509250893b613615071819c69_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
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
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
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
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15, mod_consts[20], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
            tmp_called_value_3 = generator_heap->tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[9];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
            tmp_tuple_element_4 = generator_heap->tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = generator_heap->tmp_class_creation_1__class_decl_dict;
            generator->m_frame->m_frame.f_lineno = 15;
            tmp_assign_source_12 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 15;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto try_except_handler_4;
            }
            assert(generator_heap->outline_0_var___class__ == NULL);
            generator_heap->outline_0_var___class__ = tmp_assign_source_12;
        }
        CHECK_OBJECT(generator_heap->outline_0_var___class__);
        tmp_assign_source_11 = generator_heap->outline_0_var___class__;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15 = NULL;
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

        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15 = NULL;
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
        assert(generator_heap->var_DrmBase == NULL);
        generator_heap->var_DrmBase = tmp_assign_source_11;
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT(generator_heap->var_DrmBase);
        tmp_tuple_element_5 = generator_heap->var_DrmBase;
        tmp_assign_source_13 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_5);
        assert(generator_heap->tmp_class_creation_2__bases_orig == NULL);
        generator_heap->tmp_class_creation_2__bases_orig = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = generator_heap->tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_14 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_class_creation_2__bases == NULL);
        generator_heap->tmp_class_creation_2__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_New();
        assert(generator_heap->tmp_class_creation_2__class_decl_dict == NULL);
        generator_heap->tmp_class_creation_2__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[7];
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = generator_heap->tmp_class_creation_2__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_7 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = generator_heap->tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[7];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        Py_INCREF(tmp_metaclass_value_2);
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(generator_heap->tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
        tmp_expression_value_7 = generator_heap->tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
        tmp_bases_value_2 = generator_heap->tmp_class_creation_2__bases;
        tmp_assign_source_16 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_class_creation_2__metaclass == NULL);
        generator_heap->tmp_class_creation_2__metaclass = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[7];
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = generator_heap->tmp_class_creation_2__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_9 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_2__class_decl_dict);
    generator_heap->tmp_dictdel_dict = generator_heap->tmp_class_creation_2__class_decl_dict;
    generator_heap->tmp_dictdel_key = mod_consts[7];
    generator_heap->tmp_result = DICT_REMOVE_ITEM(generator_heap->tmp_dictdel_dict, generator_heap->tmp_dictdel_key);
    if (generator_heap->tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 19;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_5;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = generator_heap->tmp_class_creation_2__metaclass;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[8]);
        tmp_condition_result_10 = (generator_heap->tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = generator_heap->tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[8]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_6 = mod_consts[21];
        tmp_args_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
        tmp_tuple_element_6 = generator_heap->tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = generator_heap->tmp_class_creation_2__class_decl_dict;
        generator->m_frame->m_frame.f_lineno = 19;
        tmp_assign_source_17 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_class_creation_2__prepared == NULL);
        generator_heap->tmp_class_creation_2__prepared = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__prepared);
        tmp_expression_value_10 = generator_heap->tmp_class_creation_2__prepared;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_10, mod_consts[10]);
        tmp_operand_value_2 = (generator_heap->tmp_result) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_11 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[11];
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = generator_heap->tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[12];
        tmp_getattr_default_2 = mod_consts[13];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__prepared);
            tmp_type_arg_4 = generator_heap->tmp_class_creation_2__prepared;
            tmp_expression_value_11 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_11 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[12]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 19;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_5;
        }
        generator_heap->exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        generator_heap->exception_value = tmp_raise_value_2;
        generator_heap->exception_lineno = 19;
        RAISE_EXCEPTION_IMPLICIT(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_5;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert(generator_heap->tmp_class_creation_2__prepared == NULL);
        generator_heap->tmp_class_creation_2__prepared = tmp_assign_source_18;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__prepared);
            tmp_set_locals_2 = generator_heap->tmp_class_creation_2__prepared;
            generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        generator_heap->tmp_dictset_value = mod_consts[14];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[15], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_7;
        }
        generator_heap->tmp_dictset_value = mod_consts[22];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[17], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_2d3db624e703d602c65ed8b793ab6b95_3)) {
            Py_XDECREF(cache_frame_2d3db624e703d602c65ed8b793ab6b95_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_2d3db624e703d602c65ed8b793ab6b95_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_2d3db624e703d602c65ed8b793ab6b95_3 = MAKE_FUNCTION_FRAME(codeobj_2d3db624e703d602c65ed8b793ab6b95, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_2d3db624e703d602c65ed8b793ab6b95_3->m_type_description == NULL);
        generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3 = cache_frame_2d3db624e703d602c65ed8b793ab6b95_3;

        // Push the new frame as the currently active one.
        pushFrameStack(generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_8;
            tmp_tuple_element_8 = mod_consts[23];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_12;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
                tmp_expression_value_12 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                        tmp_expression_value_12 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[25]);
                Py_DECREF(tmp_expression_value_12);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 21;
                    generator_heap->type_description_2 = "oc";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            generator_heap->tmp_dictset_value = PyList_New(12);
            {
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_tuple_element_17;
                PyObject *tmp_tuple_element_18;
                PyObject *tmp_tuple_element_19;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_9 = mod_consts[26];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_5;
                    PyObject *tmp_expression_value_13;
                    PyObject *tmp_args_element_value_1;
                    PyObject *tmp_expression_value_14;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
                    tmp_expression_value_13 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_13 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_13);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[27]);
                    Py_DECREF(tmp_expression_value_13);
                    if (tmp_called_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 22;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_4;
                    }
                    tmp_expression_value_14 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_14 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_14 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_14);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_14);
                    if (tmp_args_element_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_5);

                        generator_heap->exception_lineno = 22;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_4;
                    }
                    generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3->m_frame.f_lineno = 22;
                    tmp_tuple_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_1);
                    Py_DECREF(tmp_called_value_5);
                    Py_DECREF(tmp_args_element_value_1);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 22;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 1, tmp_list_element_1);
                tmp_tuple_element_10 = mod_consts[29];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_15;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_10);
                    tmp_expression_value_15 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_15 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_15 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_15);
                        } else {
                            goto tuple_build_exception_5;
                        }
                    }

                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[25]);
                    Py_DECREF(tmp_expression_value_15);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 23;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_10);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 2, tmp_list_element_1);
                tmp_tuple_element_11 = mod_consts[30];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_6;
                    PyObject *tmp_expression_value_16;
                    PyObject *tmp_args_element_value_2;
                    PyObject *tmp_expression_value_17;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_11);
                    tmp_expression_value_16 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_16 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_16 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_16);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[27]);
                    Py_DECREF(tmp_expression_value_16);
                    if (tmp_called_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 24;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_6;
                    }
                    tmp_expression_value_17 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_17 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_17);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_17);
                    if (tmp_args_element_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        generator_heap->exception_lineno = 24;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_6;
                    }
                    generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3->m_frame.f_lineno = 24;
                    tmp_tuple_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
                    Py_DECREF(tmp_called_value_6);
                    Py_DECREF(tmp_args_element_value_2);
                    if (tmp_tuple_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 24;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_11);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 3, tmp_list_element_1);
                tmp_tuple_element_12 = mod_consts[31];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_18;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_12);
                    tmp_expression_value_18 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_18 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_18);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[25]);
                    Py_DECREF(tmp_expression_value_18);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 25;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 4, tmp_list_element_1);
                tmp_tuple_element_13 = mod_consts[32];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_7;
                    PyObject *tmp_expression_value_19;
                    PyObject *tmp_args_element_value_3;
                    PyObject *tmp_expression_value_20;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_13);
                    tmp_expression_value_19 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_19 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_19 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_19);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[27]);
                    Py_DECREF(tmp_expression_value_19);
                    if (tmp_called_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 26;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_8;
                    }
                    tmp_expression_value_20 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_20 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_20 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_20);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_20);
                    if (tmp_args_element_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        generator_heap->exception_lineno = 26;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_8;
                    }
                    generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3->m_frame.f_lineno = 26;
                    tmp_tuple_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_3);
                    Py_DECREF(tmp_called_value_7);
                    Py_DECREF(tmp_args_element_value_3);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 26;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 5, tmp_list_element_1);
                tmp_tuple_element_14 = mod_consts[33];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_21;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_14);
                    tmp_expression_value_21 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_21 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_21 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_21);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[25]);
                    Py_DECREF(tmp_expression_value_21);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 27;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_14);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 6, tmp_list_element_1);
                tmp_tuple_element_15 = mod_consts[34];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_8;
                    PyObject *tmp_expression_value_22;
                    PyObject *tmp_args_element_value_4;
                    PyObject *tmp_expression_value_23;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_15);
                    tmp_expression_value_22 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_22 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_22 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_22);
                        } else {
                            goto tuple_build_exception_10;
                        }
                    }

                    tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[27]);
                    Py_DECREF(tmp_expression_value_22);
                    if (tmp_called_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 28;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_10;
                    }
                    tmp_expression_value_23 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_23 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_23 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_23);
                        } else {
                            goto tuple_build_exception_10;
                        }
                    }

                    tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_23);
                    if (tmp_args_element_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        generator_heap->exception_lineno = 28;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_10;
                    }
                    generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3->m_frame.f_lineno = 28;
                    tmp_tuple_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_4);
                    Py_DECREF(tmp_called_value_8);
                    Py_DECREF(tmp_args_element_value_4);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 28;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 7, tmp_list_element_1);
                tmp_tuple_element_16 = mod_consts[35];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_24;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_16);
                    tmp_expression_value_24 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_24 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_24 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_24);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_24);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 29;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_16);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 8, tmp_list_element_1);
                tmp_tuple_element_17 = mod_consts[36];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_25;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_17);
                    tmp_expression_value_25 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_25 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_25 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_25);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_25);
                    if (tmp_tuple_element_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 30;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_17);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 9, tmp_list_element_1);
                tmp_tuple_element_18 = mod_consts[37];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_26;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_18);
                    tmp_expression_value_26 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_26 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_26 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_26);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_26);
                    if (tmp_tuple_element_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 31;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_18);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 10, tmp_list_element_1);
                tmp_tuple_element_19 = mod_consts[38];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_27;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_19);
                    tmp_expression_value_27 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[24]);

                    if (tmp_expression_value_27 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_27 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_27);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_27);
                    if (tmp_tuple_element_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 32;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_19);
                }
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 11, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(generator_heap->tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[39], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 20;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_1;
            struct Nuitka_CellObject *tmp_closure_1[2];
            tmp_annotations_1 = PyDict_Copy(mod_consts[40]);

            tmp_closure_1[0] = generator_heap->var_ctypes;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_1[1]);

            generator_heap->tmp_dictset_value = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1___del__(tmp_annotations_1, tmp_closure_1);

            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[41], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 35;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_3;
            struct Nuitka_CellObject *tmp_closure_2[1];
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_4;
            struct Nuitka_CellObject *tmp_closure_3[1];
            generator_heap->tmp_res = MAPPING_HAS_ITEM(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[43]);

            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 39;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_12 = (generator_heap->tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_9 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[43]);

            if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[43]);
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 39;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 39;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_1 = mod_consts[44];
            tmp_expression_value_29 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[45]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                    }

                    assert(!(tmp_expression_value_29 == NULL));
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[46]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_value_9);

                generator_heap->exception_lineno = 40;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_3 = mod_consts[47];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_value_9);

                generator_heap->exception_lineno = 40;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(generator_heap->tmp_res != 0));

            tmp_closure_2[0] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_2[0]);

            tmp_args_element_value_5 = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_crtcs(tmp_annotations_2, tmp_closure_2);

            generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3->m_frame.f_lineno = 39;
            generator_heap->tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_5);
            if (generator_heap->tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 39;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_2 = mod_consts[44];
            tmp_expression_value_31 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[45]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                    }

                    assert(!(tmp_expression_value_31 == NULL));
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[46]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 40;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_4 = mod_consts[47];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 40;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));

            tmp_closure_3[0] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_3[0]);

            tmp_args_element_value_6 = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_crtcs(tmp_annotations_3, tmp_closure_3);

            generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3->m_frame.f_lineno = 39;
            generator_heap->tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (generator_heap->tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 39;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            condexpr_end_5:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[48], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 40;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_5;
            struct Nuitka_CellObject *tmp_closure_4[1];
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_6;
            struct Nuitka_CellObject *tmp_closure_5[1];
            generator_heap->tmp_res = MAPPING_HAS_ITEM(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[43]);

            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 49;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_13 = (generator_heap->tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_11 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[43]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[43]);
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 49;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 49;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_3 = mod_consts[44];
            tmp_expression_value_33 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[45]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        generator_heap->exception_lineno = 50;
                        generator_heap->type_description_2 = "oc";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[46]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_value_11);

                generator_heap->exception_lineno = 50;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_5 = mod_consts[50];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_value_11);

                generator_heap->exception_lineno = 50;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(generator_heap->tmp_res != 0));

            tmp_closure_4[0] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_4[0]);

            tmp_args_element_value_7 = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__3_connectors(tmp_annotations_4, tmp_closure_4);

            generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3->m_frame.f_lineno = 49;
            generator_heap->tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_7);
            if (generator_heap->tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 49;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_4 = mod_consts[44];
            tmp_expression_value_35 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[45]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 50;
                        generator_heap->type_description_2 = "oc";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[46]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 50;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_6 = mod_consts[50];
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 50;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(generator_heap->tmp_res != 0));

            tmp_closure_5[0] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_5[0]);

            tmp_args_element_value_8 = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__3_connectors(tmp_annotations_5, tmp_closure_5);

            generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3->m_frame.f_lineno = 49;
            generator_heap->tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (generator_heap->tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 49;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
            condexpr_end_6:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[51], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 50;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3);
#endif

        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3,
            generator_heap->type_description_2,
            generator_heap->outline_1_var___class__,
            generator_heap->var_ctypes
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3 == cache_frame_2d3db624e703d602c65ed8b793ab6b95_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_2d3db624e703d602c65ed8b793ab6b95_3);
            cache_frame_2d3db624e703d602c65ed8b793ab6b95_3 = NULL;
        }

        assertFrameObject(generator_heap->frame_2d3db624e703d602c65ed8b793ab6b95_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = generator_heap->tmp_class_creation_2__bases;
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = generator_heap->tmp_class_creation_2__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 19;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto try_except_handler_7;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases_orig);
        generator_heap->tmp_dictset_value = generator_heap->tmp_class_creation_2__bases_orig;
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19, mod_consts[20], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_7;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__metaclass);
            tmp_called_value_13 = generator_heap->tmp_class_creation_2__metaclass;
            tmp_tuple_element_20 = mod_consts[21];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_20);
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
            tmp_tuple_element_20 = generator_heap->tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_20);
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = generator_heap->tmp_class_creation_2__class_decl_dict;
            generator->m_frame->m_frame.f_lineno = 19;
            tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 19;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto try_except_handler_7;
            }
            assert(generator_heap->outline_1_var___class__ == NULL);
            generator_heap->outline_1_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT(generator_heap->outline_1_var___class__);
        tmp_assign_source_19 = generator_heap->outline_1_var___class__;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_4;
        generator_heap->exception_value = generator_heap->exception_keeper_value_4;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(generator_heap->outline_1_var___class__);
        Py_DECREF(generator_heap->outline_1_var___class__);
        generator_heap->outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_5;
        generator_heap->exception_value = generator_heap->exception_keeper_value_5;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        generator_heap->exception_lineno = 19;
        goto try_except_handler_5;
        outline_result_2:;
        assert(generator_heap->var_DrmModeRes == NULL);
        generator_heap->var_DrmModeRes = tmp_assign_source_19;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_2__bases_orig);
    generator_heap->tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_2__bases);
    generator_heap->tmp_class_creation_2__bases = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_2__class_decl_dict);
    generator_heap->tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_2__metaclass);
    generator_heap->tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_2__prepared);
    generator_heap->tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_2__bases_orig);
    generator_heap->tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
    Py_DECREF(generator_heap->tmp_class_creation_2__bases);
    generator_heap->tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_2__class_decl_dict);
    Py_DECREF(generator_heap->tmp_class_creation_2__class_decl_dict);
    generator_heap->tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_2__metaclass);
    Py_DECREF(generator_heap->tmp_class_creation_2__metaclass);
    generator_heap->tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_2__prepared);
    Py_DECREF(generator_heap->tmp_class_creation_2__prepared);
    generator_heap->tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_21;
        CHECK_OBJECT(generator_heap->var_DrmBase);
        tmp_tuple_element_21 = generator_heap->var_DrmBase;
        tmp_assign_source_21 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_21);
        assert(generator_heap->tmp_class_creation_3__bases_orig == NULL);
        generator_heap->tmp_class_creation_3__bases_orig = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = generator_heap->tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_22 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_8;
        }
        assert(generator_heap->tmp_class_creation_3__bases == NULL);
        generator_heap->tmp_class_creation_3__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_New();
        assert(generator_heap->tmp_class_creation_3__class_decl_dict == NULL);
        generator_heap->tmp_class_creation_3__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_15;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_3;
        tmp_key_value_7 = mod_consts[7];
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = generator_heap->tmp_class_creation_3__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_15 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = generator_heap->tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[7];
        tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_metaclass_value_3 == NULL) {
            tmp_metaclass_value_3 = Py_None;
        }
        assert(!(tmp_metaclass_value_3 == NULL));
        Py_INCREF(tmp_metaclass_value_3);
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(generator_heap->tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_16 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
        tmp_expression_value_36 = generator_heap->tmp_class_creation_3__bases;
        tmp_subscript_value_7 = mod_consts[1];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_36, tmp_subscript_value_7, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_8;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
        tmp_bases_value_3 = generator_heap->tmp_class_creation_3__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_8;
        }
        assert(generator_heap->tmp_class_creation_3__metaclass == NULL);
        generator_heap->tmp_class_creation_3__metaclass = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[7];
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = generator_heap->tmp_class_creation_3__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_17 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_3__class_decl_dict);
    generator_heap->tmp_dictdel_dict = generator_heap->tmp_class_creation_3__class_decl_dict;
    generator_heap->tmp_dictdel_key = mod_consts[7];
    generator_heap->tmp_result = DICT_REMOVE_ITEM(generator_heap->tmp_dictdel_dict, generator_heap->tmp_dictdel_key);
    if (generator_heap->tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 64;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_8;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__metaclass);
        tmp_expression_value_37 = generator_heap->tmp_class_creation_3__metaclass;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_37, mod_consts[8]);
        tmp_condition_result_18 = (generator_heap->tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__metaclass);
        tmp_expression_value_38 = generator_heap->tmp_class_creation_3__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[8]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_8;
        }
        tmp_tuple_element_22 = mod_consts[53];
        tmp_args_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_22);
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
        tmp_tuple_element_22 = generator_heap->tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_22);
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = generator_heap->tmp_class_creation_3__class_decl_dict;
        generator->m_frame->m_frame.f_lineno = 64;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_8;
        }
        assert(generator_heap->tmp_class_creation_3__prepared == NULL);
        generator_heap->tmp_class_creation_3__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__prepared);
        tmp_expression_value_39 = generator_heap->tmp_class_creation_3__prepared;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_39, mod_consts[10]);
        tmp_operand_value_3 = (generator_heap->tmp_result) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_19 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[11];
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = generator_heap->tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[12];
        tmp_getattr_default_3 = mod_consts[13];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_23);
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__prepared);
            tmp_type_arg_6 = generator_heap->tmp_class_creation_3__prepared;
            tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_40 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[12]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 64;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_8;
        }
        generator_heap->exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        generator_heap->exception_value = tmp_raise_value_3;
        generator_heap->exception_lineno = 64;
        RAISE_EXCEPTION_IMPLICIT(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_8;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert(generator_heap->tmp_class_creation_3__prepared == NULL);
        generator_heap->tmp_class_creation_3__prepared = tmp_assign_source_26;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__prepared);
            tmp_set_locals_3 = generator_heap->tmp_class_creation_3__prepared;
            generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        generator_heap->tmp_dictset_value = mod_consts[14];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[15], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_10;
        }
        generator_heap->tmp_dictset_value = mod_consts[54];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[17], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_10;
        }
        if (isFrameUnusable(cache_frame_e0999572f54b6dfd91c45924005e2d24_4)) {
            Py_XDECREF(cache_frame_e0999572f54b6dfd91c45924005e2d24_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e0999572f54b6dfd91c45924005e2d24_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e0999572f54b6dfd91c45924005e2d24_4 = MAKE_FUNCTION_FRAME(codeobj_e0999572f54b6dfd91c45924005e2d24, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_e0999572f54b6dfd91c45924005e2d24_4->m_type_description == NULL);
        generator_heap->frame_e0999572f54b6dfd91c45924005e2d24_4 = cache_frame_e0999572f54b6dfd91c45924005e2d24_4;

        // Push the new frame as the currently active one.
        pushFrameStack(generator_heap->frame_e0999572f54b6dfd91c45924005e2d24_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(generator_heap->frame_e0999572f54b6dfd91c45924005e2d24_4) == 2); // Frame stack

        // Framed code:
        generator_heap->tmp_dictset_value = mod_consts[55];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[56], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 65;
            generator_heap->type_description_2 = "oc";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_24;
            tmp_tuple_element_24 = mod_consts[57];
            tmp_list_element_2 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_41;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_24);
                tmp_expression_value_41 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                if (tmp_expression_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                        tmp_expression_value_41 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                        Py_INCREF(tmp_expression_value_41);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[28]);
                Py_DECREF(tmp_expression_value_41);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 68;
                    generator_heap->type_description_2 = "oc";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_24);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            generator_heap->tmp_dictset_value = PyList_New(15);
            {
                PyObject *tmp_tuple_element_25;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_tuple_element_31;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_tuple_element_35;
                PyObject *tmp_tuple_element_36;
                PyObject *tmp_tuple_element_37;
                PyObject *tmp_tuple_element_38;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_25 = mod_consts[58];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_42;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_25);
                    tmp_expression_value_42 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_42 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_42 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_42);
                        } else {
                            goto tuple_build_exception_17;
                        }
                    }

                    tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[59]);
                    Py_DECREF(tmp_expression_value_42);
                    if (tmp_tuple_element_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 69;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_17;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_25);
                }
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_26 = mod_consts[60];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_43;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_26);
                    tmp_expression_value_43 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_43 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_43 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_43);
                        } else {
                            goto tuple_build_exception_18;
                        }
                    }

                    tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[59]);
                    Py_DECREF(tmp_expression_value_43);
                    if (tmp_tuple_element_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 70;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_18;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_26);
                }
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_27 = mod_consts[61];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_44;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_27);
                    tmp_expression_value_44 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_44 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_44 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_44);
                        } else {
                            goto tuple_build_exception_19;
                        }
                    }

                    tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[59]);
                    Py_DECREF(tmp_expression_value_44);
                    if (tmp_tuple_element_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 71;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_19;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_27);
                }
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 3, tmp_list_element_2);
                tmp_tuple_element_28 = mod_consts[62];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_45;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_28);
                    tmp_expression_value_45 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_45 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_45 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_45);
                        } else {
                            goto tuple_build_exception_20;
                        }
                    }

                    tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[59]);
                    Py_DECREF(tmp_expression_value_45);
                    if (tmp_tuple_element_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 72;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_28);
                }
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 4, tmp_list_element_2);
                tmp_tuple_element_29 = mod_consts[63];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_46;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_29);
                    tmp_expression_value_46 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_46 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_46 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_46);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[59]);
                    Py_DECREF(tmp_expression_value_46);
                    if (tmp_tuple_element_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 73;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_21;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_29);
                }
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 5, tmp_list_element_2);
                tmp_tuple_element_30 = mod_consts[64];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_47;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_30);
                    tmp_expression_value_47 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_47 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_47 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_47);
                        } else {
                            goto tuple_build_exception_22;
                        }
                    }

                    tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[59]);
                    Py_DECREF(tmp_expression_value_47);
                    if (tmp_tuple_element_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 74;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_22;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_30);
                }
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 6, tmp_list_element_2);
                tmp_tuple_element_31 = mod_consts[65];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_48;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_31);
                    tmp_expression_value_48 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_48 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_48 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_48);
                        } else {
                            goto tuple_build_exception_23;
                        }
                    }

                    tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[59]);
                    Py_DECREF(tmp_expression_value_48);
                    if (tmp_tuple_element_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 75;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_23;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_31);
                }
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 7, tmp_list_element_2);
                tmp_tuple_element_32 = mod_consts[66];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_49;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_32);
                    tmp_expression_value_49 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_49 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_49 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_49);
                        } else {
                            goto tuple_build_exception_24;
                        }
                    }

                    tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[59]);
                    Py_DECREF(tmp_expression_value_49);
                    if (tmp_tuple_element_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 76;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_24;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_32);
                }
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 8, tmp_list_element_2);
                tmp_tuple_element_33 = mod_consts[67];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_50;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_33);
                    tmp_expression_value_50 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_50 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_50 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_50);
                        } else {
                            goto tuple_build_exception_25;
                        }
                    }

                    tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[59]);
                    Py_DECREF(tmp_expression_value_50);
                    if (tmp_tuple_element_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 77;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_25;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_33);
                }
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 9, tmp_list_element_2);
                tmp_tuple_element_34 = mod_consts[68];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_51;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_34);
                    tmp_expression_value_51 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_51 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_51 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_51);
                        } else {
                            goto tuple_build_exception_26;
                        }
                    }

                    tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[59]);
                    Py_DECREF(tmp_expression_value_51);
                    if (tmp_tuple_element_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 78;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_26;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_34);
                }
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 10, tmp_list_element_2);
                tmp_tuple_element_35 = mod_consts[69];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_52;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_35);
                    tmp_expression_value_52 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_52 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_52 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_52);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_52);
                    if (tmp_tuple_element_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 79;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_27;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_35);
                }
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 11, tmp_list_element_2);
                tmp_tuple_element_36 = mod_consts[70];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_53;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_36);
                    tmp_expression_value_53 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_53 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_53 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_53);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_53);
                    if (tmp_tuple_element_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 80;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_28;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_36);
                }
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 12, tmp_list_element_2);
                tmp_tuple_element_37 = mod_consts[71];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_54;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_37);
                    tmp_expression_value_54 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_54 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_54 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_54);
                        } else {
                            goto tuple_build_exception_29;
                        }
                    }

                    tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_54);
                    if (tmp_tuple_element_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 81;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_29;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_37);
                }
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 13, tmp_list_element_2);
                tmp_tuple_element_38 = mod_consts[72];
                tmp_list_element_2 = PyTuple_New(2);
                {
                    PyObject *tmp_mult_expr_left_1;
                    PyObject *tmp_mult_expr_right_1;
                    PyObject *tmp_expression_value_55;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_38);
                    tmp_expression_value_55 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[24]);

                    if (tmp_expression_value_55 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_55 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_55);
                        } else {
                            goto tuple_build_exception_30;
                        }
                    }

                    tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[73]);
                    Py_DECREF(tmp_expression_value_55);
                    if (tmp_mult_expr_left_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 82;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_30;
                    }
                    tmp_mult_expr_right_1 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[56]);

                    if (unlikely(tmp_mult_expr_right_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                        Py_DECREF(tmp_mult_expr_left_1);
                        FORMAT_NAME_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[56]);
                        NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        CHAIN_EXCEPTION(generator_heap->exception_value);

                        generator_heap->exception_lineno = 82;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_30;
                    }

                    if (tmp_mult_expr_right_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_mult_expr_left_1);

                        generator_heap->exception_lineno = 82;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_30;
                    }
                    tmp_tuple_element_38 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
                    Py_DECREF(tmp_mult_expr_left_1);
                    Py_DECREF(tmp_mult_expr_right_1);
                    if (tmp_tuple_element_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 82;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_30;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_38);
                }
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_30:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 14, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(generator_heap->tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[39], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 67;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_6;
            struct Nuitka_CellObject *tmp_closure_6[2];
            tmp_annotations_6 = PyDict_Copy(mod_consts[40]);

            tmp_closure_6[0] = generator_heap->var_ctypes;
            Py_INCREF(tmp_closure_6[0]);
            tmp_closure_6[1] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_6[1]);

            generator_heap->tmp_dictset_value = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__4___del__(tmp_annotations_6, tmp_closure_6);

            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[41], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 85;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_e0999572f54b6dfd91c45924005e2d24_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_e0999572f54b6dfd91c45924005e2d24_4);
#endif

        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_e0999572f54b6dfd91c45924005e2d24_4, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_e0999572f54b6dfd91c45924005e2d24_4->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_e0999572f54b6dfd91c45924005e2d24_4, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_e0999572f54b6dfd91c45924005e2d24_4,
            generator_heap->type_description_2,
            generator_heap->outline_2_var___class__,
            generator_heap->var_ctypes
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_e0999572f54b6dfd91c45924005e2d24_4 == cache_frame_e0999572f54b6dfd91c45924005e2d24_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_e0999572f54b6dfd91c45924005e2d24_4);
            cache_frame_e0999572f54b6dfd91c45924005e2d24_4 = NULL;
        }

        assertFrameObject(generator_heap->frame_e0999572f54b6dfd91c45924005e2d24_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = generator_heap->tmp_class_creation_3__bases;
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = generator_heap->tmp_class_creation_3__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 64;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto try_except_handler_10;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases_orig);
        generator_heap->tmp_dictset_value = generator_heap->tmp_class_creation_3__bases_orig;
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64, mod_consts[20], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_10;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__metaclass);
            tmp_called_value_15 = generator_heap->tmp_class_creation_3__metaclass;
            tmp_tuple_element_39 = mod_consts[53];
            tmp_args_value_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_39);
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
            tmp_tuple_element_39 = generator_heap->tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_39);
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = generator_heap->tmp_class_creation_3__class_decl_dict;
            generator->m_frame->m_frame.f_lineno = 64;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 64;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto try_except_handler_10;
            }
            assert(generator_heap->outline_2_var___class__ == NULL);
            generator_heap->outline_2_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(generator_heap->outline_2_var___class__);
        tmp_assign_source_27 = generator_heap->outline_2_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_7;
        generator_heap->exception_value = generator_heap->exception_keeper_value_7;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(generator_heap->outline_2_var___class__);
        Py_DECREF(generator_heap->outline_2_var___class__);
        generator_heap->outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_8;
        generator_heap->exception_value = generator_heap->exception_keeper_value_8;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        generator_heap->exception_lineno = 64;
        goto try_except_handler_8;
        outline_result_3:;
        assert(generator_heap->var_DrmModeModeInfo == NULL);
        generator_heap->var_DrmModeModeInfo = tmp_assign_source_27;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_3__bases_orig);
    generator_heap->tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_3__bases);
    generator_heap->tmp_class_creation_3__bases = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_3__class_decl_dict);
    generator_heap->tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_3__metaclass);
    generator_heap->tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_3__prepared);
    generator_heap->tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_9;
    generator_heap->exception_value = generator_heap->exception_keeper_value_9;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_3__bases_orig);
    generator_heap->tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
    Py_DECREF(generator_heap->tmp_class_creation_3__bases);
    generator_heap->tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_3__class_decl_dict);
    Py_DECREF(generator_heap->tmp_class_creation_3__class_decl_dict);
    generator_heap->tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_3__metaclass);
    Py_DECREF(generator_heap->tmp_class_creation_3__metaclass);
    generator_heap->tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_3__prepared);
    Py_DECREF(generator_heap->tmp_class_creation_3__prepared);
    generator_heap->tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_40;
        CHECK_OBJECT(generator_heap->var_DrmBase);
        tmp_tuple_element_40 = generator_heap->var_DrmBase;
        tmp_assign_source_29 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_40);
        assert(generator_heap->tmp_class_creation_4__bases_orig == NULL);
        generator_heap->tmp_class_creation_4__bases_orig = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = generator_heap->tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_30 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_11;
        }
        assert(generator_heap->tmp_class_creation_4__bases == NULL);
        generator_heap->tmp_class_creation_4__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = PyDict_New();
        assert(generator_heap->tmp_class_creation_4__class_decl_dict == NULL);
        generator_heap->tmp_class_creation_4__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_4;
        bool tmp_condition_result_21;
        PyObject *tmp_key_value_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_4;
        tmp_key_value_10 = mod_consts[7];
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_10 = generator_heap->tmp_class_creation_4__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_10, tmp_key_value_10);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_21 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_11 = generator_heap->tmp_class_creation_4__class_decl_dict;
        tmp_key_value_11 = mod_consts[7];
        tmp_metaclass_value_4 = DICT_GET_ITEM0(tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_metaclass_value_4 == NULL) {
            tmp_metaclass_value_4 = Py_None;
        }
        assert(!(tmp_metaclass_value_4 == NULL));
        Py_INCREF(tmp_metaclass_value_4);
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(generator_heap->tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_22 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases);
        tmp_expression_value_56 = generator_heap->tmp_class_creation_4__bases;
        tmp_subscript_value_8 = mod_consts[1];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_56, tmp_subscript_value_8, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_11;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases);
        tmp_bases_value_4 = generator_heap->tmp_class_creation_4__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_11;
        }
        assert(generator_heap->tmp_class_creation_4__metaclass == NULL);
        generator_heap->tmp_class_creation_4__metaclass = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_key_value_12;
        PyObject *tmp_dict_arg_value_12;
        tmp_key_value_12 = mod_consts[7];
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_12 = generator_heap->tmp_class_creation_4__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_12, tmp_key_value_12);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_23 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_4__class_decl_dict);
    generator_heap->tmp_dictdel_dict = generator_heap->tmp_class_creation_4__class_decl_dict;
    generator_heap->tmp_dictdel_key = mod_consts[7];
    generator_heap->tmp_result = DICT_REMOVE_ITEM(generator_heap->tmp_dictdel_dict, generator_heap->tmp_dictdel_key);
    if (generator_heap->tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 89;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_11;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_expression_value_57;
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__metaclass);
        tmp_expression_value_57 = generator_heap->tmp_class_creation_4__metaclass;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_57, mod_consts[8]);
        tmp_condition_result_24 = (generator_heap->tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__metaclass);
        tmp_expression_value_58 = generator_heap->tmp_class_creation_4__metaclass;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[8]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_11;
        }
        tmp_tuple_element_41 = mod_consts[50];
        tmp_args_value_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_41);
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases);
        tmp_tuple_element_41 = generator_heap->tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_41);
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = generator_heap->tmp_class_creation_4__class_decl_dict;
        generator->m_frame->m_frame.f_lineno = 89;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_11;
        }
        assert(generator_heap->tmp_class_creation_4__prepared == NULL);
        generator_heap->tmp_class_creation_4__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_25;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_59;
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__prepared);
        tmp_expression_value_59 = generator_heap->tmp_class_creation_4__prepared;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_59, mod_consts[10]);
        tmp_operand_value_4 = (generator_heap->tmp_result) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_25 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[11];
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = generator_heap->tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[12];
        tmp_getattr_default_4 = mod_consts[13];
        tmp_tuple_element_42 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_42);
            CHECK_OBJECT(generator_heap->tmp_class_creation_4__prepared);
            tmp_type_arg_8 = generator_heap->tmp_class_creation_4__prepared;
            tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_60 == NULL));
            tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[12]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_tuple_element_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 89;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_31;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_31:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_31:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_11;
        }
        generator_heap->exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        generator_heap->exception_value = tmp_raise_value_4;
        generator_heap->exception_lineno = 89;
        RAISE_EXCEPTION_IMPLICIT(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_11;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(generator_heap->tmp_class_creation_4__prepared == NULL);
        generator_heap->tmp_class_creation_4__prepared = tmp_assign_source_34;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(generator_heap->tmp_class_creation_4__prepared);
            tmp_set_locals_4 = generator_heap->tmp_class_creation_4__prepared;
            generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        generator_heap->tmp_dictset_value = mod_consts[14];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[15], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_13;
        }
        generator_heap->tmp_dictset_value = mod_consts[75];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[17], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_13;
        }
        if (isFrameUnusable(cache_frame_a1476a3b471ab26330b202093dbfe363_5)) {
            Py_XDECREF(cache_frame_a1476a3b471ab26330b202093dbfe363_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a1476a3b471ab26330b202093dbfe363_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a1476a3b471ab26330b202093dbfe363_5 = MAKE_FUNCTION_FRAME(codeobj_a1476a3b471ab26330b202093dbfe363, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a1476a3b471ab26330b202093dbfe363_5->m_type_description == NULL);
        generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5 = cache_frame_a1476a3b471ab26330b202093dbfe363_5;

        // Push the new frame as the currently active one.
        pushFrameStack(generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5) == 2); // Frame stack

        // Framed code:
        generator_heap->tmp_dictset_value = mod_consts[76];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[77], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 90;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[78];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[79], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 91;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[80];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[81], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 92;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[76];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[82], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 94;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[78];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[83], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 95;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[80];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[84], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[85];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[86], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 97;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[87];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[88], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 98;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[89];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[90], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[1];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[91], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[76];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[92], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 102;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[78];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[93], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 103;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[80];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[94], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 104;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[85];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[95], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 105;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[87];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[96], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 106;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[89];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[97], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[98];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[99], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 108;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[100];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[101], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 109;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[102];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[103], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 110;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[104];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[105], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[106];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[107], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 112;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[108];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[109], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 113;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[110];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[111], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[112];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[113], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 115;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[114];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[115], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 116;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[116];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[117], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 117;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[118];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[119], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 118;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[120];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[121], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 119;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        generator_heap->tmp_dictset_value = mod_consts[122];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[123], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 120;
            generator_heap->type_description_2 = "oco";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_43;
            tmp_tuple_element_43 = mod_consts[124];
            tmp_list_element_3 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_61;
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_43);
                tmp_expression_value_61 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                if (tmp_expression_value_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                        tmp_expression_value_61 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                        Py_INCREF(tmp_expression_value_61);
                    } else {
                        goto tuple_build_exception_32;
                    }
                }

                tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[28]);
                Py_DECREF(tmp_expression_value_61);
                if (tmp_tuple_element_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 123;
                    generator_heap->type_description_2 = "oco";
                    goto tuple_build_exception_32;
                }
                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_43);
            }
            goto tuple_build_noexception_32;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_32:;
            generator_heap->tmp_dictset_value = PyList_New(15);
            {
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_tuple_element_45;
                PyObject *tmp_tuple_element_46;
                PyObject *tmp_tuple_element_47;
                PyObject *tmp_tuple_element_48;
                PyObject *tmp_tuple_element_49;
                PyObject *tmp_tuple_element_50;
                PyObject *tmp_tuple_element_51;
                PyObject *tmp_tuple_element_52;
                PyObject *tmp_tuple_element_53;
                PyObject *tmp_tuple_element_54;
                PyObject *tmp_tuple_element_55;
                PyObject *tmp_tuple_element_56;
                PyObject *tmp_tuple_element_57;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_44 = mod_consts[125];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_62;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_44);
                    tmp_expression_value_62 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_62 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_62 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_62);
                        } else {
                            goto tuple_build_exception_33;
                        }
                    }

                    tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_62);
                    if (tmp_tuple_element_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 124;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_33;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_44);
                }
                goto tuple_build_noexception_33;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_33:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_33:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_45 = mod_consts[126];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_63;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_45);
                    tmp_expression_value_63 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_63 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_63 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_63);
                        } else {
                            goto tuple_build_exception_34;
                        }
                    }

                    tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_63);
                    if (tmp_tuple_element_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 125;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_34;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_45);
                }
                goto tuple_build_noexception_34;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_34:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_34:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 2, tmp_list_element_3);
                tmp_tuple_element_46 = mod_consts[127];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_64;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_46);
                    tmp_expression_value_64 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_64 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_64 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_64);
                        } else {
                            goto tuple_build_exception_35;
                        }
                    }

                    tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_64);
                    if (tmp_tuple_element_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 126;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_35;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_46);
                }
                goto tuple_build_noexception_35;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_35:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_35:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 3, tmp_list_element_3);
                tmp_tuple_element_47 = mod_consts[128];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_65;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_47);
                    tmp_expression_value_65 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_65 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_65 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_65);
                        } else {
                            goto tuple_build_exception_36;
                        }
                    }

                    tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[129]);
                    Py_DECREF(tmp_expression_value_65);
                    if (tmp_tuple_element_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 127;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_36;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_47);
                }
                goto tuple_build_noexception_36;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_36:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_36:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 4, tmp_list_element_3);
                tmp_tuple_element_48 = mod_consts[130];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_66;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_48);
                    tmp_expression_value_66 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_66 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_66 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_66);
                        } else {
                            goto tuple_build_exception_37;
                        }
                    }

                    tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_66);
                    if (tmp_tuple_element_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 128;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_37;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_48);
                }
                goto tuple_build_noexception_37;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_37:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_37:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 5, tmp_list_element_3);
                tmp_tuple_element_49 = mod_consts[131];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_67;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_49);
                    tmp_expression_value_67 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_67 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_67 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_67);
                        } else {
                            goto tuple_build_exception_38;
                        }
                    }

                    tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_67);
                    if (tmp_tuple_element_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 129;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_38;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_49);
                }
                goto tuple_build_noexception_38;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_38:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_38:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 6, tmp_list_element_3);
                tmp_tuple_element_50 = mod_consts[132];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_68;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_50);
                    tmp_expression_value_68 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_68 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_68 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_68);
                        } else {
                            goto tuple_build_exception_39;
                        }
                    }

                    tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[129]);
                    Py_DECREF(tmp_expression_value_68);
                    if (tmp_tuple_element_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 130;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_39;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_50);
                }
                goto tuple_build_noexception_39;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_39:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_39:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 7, tmp_list_element_3);
                tmp_tuple_element_51 = mod_consts[133];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_69;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_51);
                    tmp_expression_value_69 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_69 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_69 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_69);
                        } else {
                            goto tuple_build_exception_40;
                        }
                    }

                    tmp_tuple_element_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[25]);
                    Py_DECREF(tmp_expression_value_69);
                    if (tmp_tuple_element_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 131;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_40;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_51);
                }
                goto tuple_build_noexception_40;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_40:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_40:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 8, tmp_list_element_3);
                tmp_tuple_element_52 = mod_consts[134];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_17;
                    PyObject *tmp_expression_value_70;
                    PyObject *tmp_args_element_value_9;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_52);
                    tmp_expression_value_70 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_70 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_70 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_70);
                        } else {
                            goto tuple_build_exception_41;
                        }
                    }

                    tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[27]);
                    Py_DECREF(tmp_expression_value_70);
                    if (tmp_called_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 132;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_41;
                    }
                    tmp_args_element_value_9 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[53]);

                    if (tmp_args_element_value_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(generator_heap->var_DrmModeModeInfo);
                            tmp_args_element_value_9 = generator_heap->var_DrmModeModeInfo;
                            Py_INCREF(tmp_args_element_value_9);
                        } else {
                            goto tuple_build_exception_41;
                        }
                    }

                    generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5->m_frame.f_lineno = 132;
                    tmp_tuple_element_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_9);
                    Py_DECREF(tmp_called_value_17);
                    Py_DECREF(tmp_args_element_value_9);
                    if (tmp_tuple_element_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 132;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_41;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_52);
                }
                goto tuple_build_noexception_41;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_41:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_41:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 9, tmp_list_element_3);
                tmp_tuple_element_53 = mod_consts[135];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_71;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_53);
                    tmp_expression_value_71 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_71 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_71 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_71);
                        } else {
                            goto tuple_build_exception_42;
                        }
                    }

                    tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[25]);
                    Py_DECREF(tmp_expression_value_71);
                    if (tmp_tuple_element_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 133;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_42;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_53);
                }
                goto tuple_build_noexception_42;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_42:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_42:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 10, tmp_list_element_3);
                tmp_tuple_element_54 = mod_consts[136];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_18;
                    PyObject *tmp_expression_value_72;
                    PyObject *tmp_args_element_value_10;
                    PyObject *tmp_expression_value_73;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_54);
                    tmp_expression_value_72 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_72 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_72 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_72);
                        } else {
                            goto tuple_build_exception_43;
                        }
                    }

                    tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[27]);
                    Py_DECREF(tmp_expression_value_72);
                    if (tmp_called_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 134;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_43;
                    }
                    tmp_expression_value_73 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_73 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_73 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_73);
                        } else {
                            goto tuple_build_exception_43;
                        }
                    }

                    tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_73);
                    if (tmp_args_element_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        generator_heap->exception_lineno = 134;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_43;
                    }
                    generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5->m_frame.f_lineno = 134;
                    tmp_tuple_element_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_10);
                    Py_DECREF(tmp_called_value_18);
                    Py_DECREF(tmp_args_element_value_10);
                    if (tmp_tuple_element_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 134;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_43;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_54);
                }
                goto tuple_build_noexception_43;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_43:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_43:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 11, tmp_list_element_3);
                tmp_tuple_element_55 = mod_consts[137];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_19;
                    PyObject *tmp_expression_value_74;
                    PyObject *tmp_args_element_value_11;
                    PyObject *tmp_expression_value_75;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_55);
                    tmp_expression_value_74 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_74 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_74 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_74);
                        } else {
                            goto tuple_build_exception_44;
                        }
                    }

                    tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[27]);
                    Py_DECREF(tmp_expression_value_74);
                    if (tmp_called_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 135;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_44;
                    }
                    tmp_expression_value_75 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_75 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_75 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_75);
                        } else {
                            goto tuple_build_exception_44;
                        }
                    }

                    tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[138]);
                    Py_DECREF(tmp_expression_value_75);
                    if (tmp_args_element_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        generator_heap->exception_lineno = 135;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_44;
                    }
                    generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5->m_frame.f_lineno = 135;
                    tmp_tuple_element_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_11);
                    Py_DECREF(tmp_called_value_19);
                    Py_DECREF(tmp_args_element_value_11);
                    if (tmp_tuple_element_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 135;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_44;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_55);
                }
                goto tuple_build_noexception_44;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_44:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_44:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 12, tmp_list_element_3);
                tmp_tuple_element_56 = mod_consts[33];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_76;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_56);
                    tmp_expression_value_76 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_76 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_76 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_76);
                        } else {
                            goto tuple_build_exception_45;
                        }
                    }

                    tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[25]);
                    Py_DECREF(tmp_expression_value_76);
                    if (tmp_tuple_element_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 136;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_45;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_56);
                }
                goto tuple_build_noexception_45;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_45:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_45:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 13, tmp_list_element_3);
                tmp_tuple_element_57 = mod_consts[139];
                tmp_list_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_20;
                    PyObject *tmp_expression_value_77;
                    PyObject *tmp_args_element_value_12;
                    PyObject *tmp_expression_value_78;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_57);
                    tmp_expression_value_77 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_77 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_77 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_77);
                        } else {
                            goto tuple_build_exception_46;
                        }
                    }

                    tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[27]);
                    Py_DECREF(tmp_expression_value_77);
                    if (tmp_called_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 137;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_46;
                    }
                    tmp_expression_value_78 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[24]);

                    if (tmp_expression_value_78 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_78 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_78);
                        } else {
                            goto tuple_build_exception_46;
                        }
                    }

                    tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_78);
                    if (tmp_args_element_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        generator_heap->exception_lineno = 137;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_46;
                    }
                    generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5->m_frame.f_lineno = 137;
                    tmp_tuple_element_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_12);
                    Py_DECREF(tmp_called_value_20);
                    Py_DECREF(tmp_args_element_value_12);
                    if (tmp_tuple_element_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 137;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_46;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_57);
                }
                goto tuple_build_noexception_46;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_46:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_46:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 14, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(generator_heap->tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[39], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 122;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_7;
            struct Nuitka_CellObject *tmp_closure_7[2];
            tmp_annotations_7 = PyDict_Copy(mod_consts[40]);

            tmp_closure_7[0] = generator_heap->var_ctypes;
            Py_INCREF(tmp_closure_7[0]);
            tmp_closure_7[1] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_7[1]);

            generator_heap->tmp_dictset_value = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__5___del__(tmp_annotations_7, tmp_closure_7);

            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[41], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 140;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_9;
            struct Nuitka_CellObject *tmp_closure_8[1];
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_10;
            struct Nuitka_CellObject *tmp_closure_9[1];
            generator_heap->tmp_res = MAPPING_HAS_ITEM(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[43]);

            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 144;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_26 = (generator_heap->tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_21 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[43]);

            if (unlikely(tmp_called_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[43]);
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 144;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 144;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }
            tmp_dict_key_5 = mod_consts[44];
            tmp_expression_value_80 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[45]);

            if (tmp_expression_value_80 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_expression_value_80 == NULL)) {
                        tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                    }

                    if (tmp_expression_value_80 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_21);

                        generator_heap->exception_lineno = 145;
                        generator_heap->type_description_2 = "oco";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_80);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[141]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_value_21);

                generator_heap->exception_lineno = 145;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_9 = mod_consts[142];
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_79);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_value_21);

                generator_heap->exception_lineno = 145;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(generator_heap->tmp_res != 0));

            tmp_closure_8[0] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_8[0]);

            tmp_args_element_value_13 = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__6_encoder(tmp_annotations_8, tmp_closure_8);

            generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5->m_frame.f_lineno = 144;
            generator_heap->tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_13);
            if (generator_heap->tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 144;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_22 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[44];
            tmp_expression_value_82 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[45]);

            if (tmp_expression_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                    }

                    if (tmp_expression_value_82 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 145;
                        generator_heap->type_description_2 = "oco";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_82);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[141]);
            Py_DECREF(tmp_expression_value_82);
            if (tmp_expression_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 145;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_10 = mod_consts[142];
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_81);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 145;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(generator_heap->tmp_res != 0));

            tmp_closure_9[0] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_9[0]);

            tmp_args_element_value_14 = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__6_encoder(tmp_annotations_9, tmp_closure_9);

            generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5->m_frame.f_lineno = 144;
            generator_heap->tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (generator_heap->tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 144;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }
            condexpr_end_11:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[143], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 145;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5);
#endif

        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5,
            generator_heap->type_description_2,
            generator_heap->outline_3_var___class__,
            generator_heap->var_ctypes,
            generator_heap->var_DrmModeModeInfo
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5 == cache_frame_a1476a3b471ab26330b202093dbfe363_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a1476a3b471ab26330b202093dbfe363_5);
            cache_frame_a1476a3b471ab26330b202093dbfe363_5 = NULL;
        }

        assertFrameObject(generator_heap->frame_a1476a3b471ab26330b202093dbfe363_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = generator_heap->tmp_class_creation_4__bases;
            CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = generator_heap->tmp_class_creation_4__bases_orig;
            tmp_condition_result_27 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 89;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto try_except_handler_13;
            }
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases_orig);
        generator_heap->tmp_dictset_value = generator_heap->tmp_class_creation_4__bases_orig;
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89, mod_consts[20], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_13;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(generator_heap->tmp_class_creation_4__metaclass);
            tmp_called_value_23 = generator_heap->tmp_class_creation_4__metaclass;
            tmp_tuple_element_58 = mod_consts[50];
            tmp_args_value_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_58);
            CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases);
            tmp_tuple_element_58 = generator_heap->tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_58);
            tmp_tuple_element_58 = generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_58);
            CHECK_OBJECT(generator_heap->tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = generator_heap->tmp_class_creation_4__class_decl_dict;
            generator->m_frame->m_frame.f_lineno = 89;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 89;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto try_except_handler_13;
            }
            assert(generator_heap->outline_3_var___class__ == NULL);
            generator_heap->outline_3_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(generator_heap->outline_3_var___class__);
        tmp_assign_source_35 = generator_heap->outline_3_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        generator_heap->exception_keeper_type_10 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_10 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_10 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_10;
        generator_heap->exception_value = generator_heap->exception_keeper_value_10;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_10;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(generator_heap->outline_3_var___class__);
        Py_DECREF(generator_heap->outline_3_var___class__);
        generator_heap->outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        generator_heap->exception_keeper_type_11 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_11 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_11 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_11;
        generator_heap->exception_value = generator_heap->exception_keeper_value_11;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_11;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        generator_heap->exception_lineno = 89;
        goto try_except_handler_11;
        outline_result_4:;
        assert(Nuitka_Cell_GET(generator_heap->var_DrmModeConnector) == NULL);
        PyCell_SET(generator_heap->var_DrmModeConnector, tmp_assign_source_35);

    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_11:;
    generator_heap->exception_keeper_type_12 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_12 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_12 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_4__bases_orig);
    generator_heap->tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_4__bases);
    generator_heap->tmp_class_creation_4__bases = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_4__class_decl_dict);
    generator_heap->tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_4__metaclass);
    generator_heap->tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_4__prepared);
    generator_heap->tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_12;
    generator_heap->exception_value = generator_heap->exception_keeper_value_12;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_12;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_4__bases_orig);
    generator_heap->tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_4__bases);
    Py_DECREF(generator_heap->tmp_class_creation_4__bases);
    generator_heap->tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_4__class_decl_dict);
    Py_DECREF(generator_heap->tmp_class_creation_4__class_decl_dict);
    generator_heap->tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_4__metaclass);
    Py_DECREF(generator_heap->tmp_class_creation_4__metaclass);
    generator_heap->tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_4__prepared);
    Py_DECREF(generator_heap->tmp_class_creation_4__prepared);
    generator_heap->tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_59;
        CHECK_OBJECT(generator_heap->var_DrmBase);
        tmp_tuple_element_59 = generator_heap->var_DrmBase;
        tmp_assign_source_37 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_59);
        assert(generator_heap->tmp_class_creation_5__bases_orig == NULL);
        generator_heap->tmp_class_creation_5__bases_orig = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = generator_heap->tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_38 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_14;
        }
        assert(generator_heap->tmp_class_creation_5__bases == NULL);
        generator_heap->tmp_class_creation_5__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = PyDict_New();
        assert(generator_heap->tmp_class_creation_5__class_decl_dict == NULL);
        generator_heap->tmp_class_creation_5__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_5;
        bool tmp_condition_result_28;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_5;
        tmp_key_value_13 = mod_consts[7];
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_13 = generator_heap->tmp_class_creation_5__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_13, tmp_key_value_13);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_28 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_14 = generator_heap->tmp_class_creation_5__class_decl_dict;
        tmp_key_value_14 = mod_consts[7];
        tmp_metaclass_value_5 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_metaclass_value_5 == NULL) {
            tmp_metaclass_value_5 = Py_None;
        }
        assert(!(tmp_metaclass_value_5 == NULL));
        Py_INCREF(tmp_metaclass_value_5);
        goto condexpr_end_12;
        condexpr_false_12:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(generator_heap->tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_14;
        }
        tmp_condition_result_29 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases);
        tmp_expression_value_83 = generator_heap->tmp_class_creation_5__bases;
        tmp_subscript_value_11 = mod_consts[1];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_83, tmp_subscript_value_11, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_14;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_14;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_13:;
        condexpr_end_12:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases);
        tmp_bases_value_5 = generator_heap->tmp_class_creation_5__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_14;
        }
        assert(generator_heap->tmp_class_creation_5__metaclass == NULL);
        generator_heap->tmp_class_creation_5__metaclass = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_key_value_15;
        PyObject *tmp_dict_arg_value_15;
        tmp_key_value_15 = mod_consts[7];
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_15 = generator_heap->tmp_class_creation_5__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_15, tmp_key_value_15);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_30 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_5__class_decl_dict);
    generator_heap->tmp_dictdel_dict = generator_heap->tmp_class_creation_5__class_decl_dict;
    generator_heap->tmp_dictdel_key = mod_consts[7];
    generator_heap->tmp_result = DICT_REMOVE_ITEM(generator_heap->tmp_dictdel_dict, generator_heap->tmp_dictdel_key);
    if (generator_heap->tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 154;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_14;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_expression_value_84;
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__metaclass);
        tmp_expression_value_84 = generator_heap->tmp_class_creation_5__metaclass;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_84, mod_consts[8]);
        tmp_condition_result_31 = (generator_heap->tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_60;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__metaclass);
        tmp_expression_value_85 = generator_heap->tmp_class_creation_5__metaclass;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[8]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_14;
        }
        tmp_tuple_element_60 = mod_consts[142];
        tmp_args_value_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_60);
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases);
        tmp_tuple_element_60 = generator_heap->tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_60);
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = generator_heap->tmp_class_creation_5__class_decl_dict;
        generator->m_frame->m_frame.f_lineno = 154;
        tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_24, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_14;
        }
        assert(generator_heap->tmp_class_creation_5__prepared == NULL);
        generator_heap->tmp_class_creation_5__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_32;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__prepared);
        tmp_expression_value_86 = generator_heap->tmp_class_creation_5__prepared;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_86, mod_consts[10]);
        tmp_operand_value_5 = (generator_heap->tmp_result) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_14;
        }
        tmp_condition_result_32 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[11];
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = generator_heap->tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[12];
        tmp_getattr_default_5 = mod_consts[13];
        tmp_tuple_element_61 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_87;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_61);
            CHECK_OBJECT(generator_heap->tmp_class_creation_5__prepared);
            tmp_type_arg_10 = generator_heap->tmp_class_creation_5__prepared;
            tmp_expression_value_87 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_87 == NULL));
            tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[12]);
            Py_DECREF(tmp_expression_value_87);
            if (tmp_tuple_element_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 154;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto tuple_build_exception_47;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_61);
        }
        goto tuple_build_noexception_47;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_47:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_47:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_14;
        }
        generator_heap->exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        generator_heap->exception_value = tmp_raise_value_5;
        generator_heap->exception_lineno = 154;
        RAISE_EXCEPTION_IMPLICIT(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_14;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = PyDict_New();
        assert(generator_heap->tmp_class_creation_5__prepared == NULL);
        generator_heap->tmp_class_creation_5__prepared = tmp_assign_source_42;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(generator_heap->tmp_class_creation_5__prepared);
            tmp_set_locals_5 = generator_heap->tmp_class_creation_5__prepared;
            generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        generator_heap->tmp_dictset_value = mod_consts[14];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[15], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_16;
        }
        generator_heap->tmp_dictset_value = mod_consts[145];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[17], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_16;
        }
        if (isFrameUnusable(cache_frame_5f63aa2fbbc2753a6192774459c11106_6)) {
            Py_XDECREF(cache_frame_5f63aa2fbbc2753a6192774459c11106_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5f63aa2fbbc2753a6192774459c11106_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5f63aa2fbbc2753a6192774459c11106_6 = MAKE_FUNCTION_FRAME(codeobj_5f63aa2fbbc2753a6192774459c11106, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5f63aa2fbbc2753a6192774459c11106_6->m_type_description == NULL);
        generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6 = cache_frame_5f63aa2fbbc2753a6192774459c11106_6;

        // Push the new frame as the currently active one.
        pushFrameStack(generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_tuple_element_62;
            tmp_tuple_element_62 = mod_consts[125];
            tmp_list_element_4 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_88;
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_62);
                tmp_expression_value_88 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[24]);

                if (tmp_expression_value_88 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                        tmp_expression_value_88 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                        Py_INCREF(tmp_expression_value_88);
                    } else {
                        goto tuple_build_exception_48;
                    }
                }

                tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[28]);
                Py_DECREF(tmp_expression_value_88);
                if (tmp_tuple_element_62 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 156;
                    generator_heap->type_description_2 = "oc";
                    goto tuple_build_exception_48;
                }
                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_62);
            }
            goto tuple_build_noexception_48;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_48:;
            Py_DECREF(tmp_list_element_4);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_48:;
            generator_heap->tmp_dictset_value = PyList_New(5);
            {
                PyObject *tmp_tuple_element_63;
                PyObject *tmp_tuple_element_64;
                PyObject *tmp_tuple_element_65;
                PyObject *tmp_tuple_element_66;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 0, tmp_list_element_4);
                tmp_tuple_element_63 = mod_consts[146];
                tmp_list_element_4 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_89;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_63);
                    tmp_expression_value_89 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[24]);

                    if (tmp_expression_value_89 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_89 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_89);
                        } else {
                            goto tuple_build_exception_49;
                        }
                    }

                    tmp_tuple_element_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_89);
                    if (tmp_tuple_element_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 157;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_49;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_63);
                }
                goto tuple_build_noexception_49;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_49:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_49:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 1, tmp_list_element_4);
                tmp_tuple_element_64 = mod_consts[147];
                tmp_list_element_4 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_90;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_64);
                    tmp_expression_value_90 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[24]);

                    if (tmp_expression_value_90 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_90 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_90);
                        } else {
                            goto tuple_build_exception_50;
                        }
                    }

                    tmp_tuple_element_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_90);
                    if (tmp_tuple_element_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 158;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_50;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_64);
                }
                goto tuple_build_noexception_50;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_50:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_50:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 2, tmp_list_element_4);
                tmp_tuple_element_65 = mod_consts[148];
                tmp_list_element_4 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_91;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_65);
                    tmp_expression_value_91 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[24]);

                    if (tmp_expression_value_91 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_91 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_91);
                        } else {
                            goto tuple_build_exception_51;
                        }
                    }

                    tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_91);
                    if (tmp_tuple_element_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 159;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_51;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_65);
                }
                goto tuple_build_noexception_51;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_51:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_51:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 3, tmp_list_element_4);
                tmp_tuple_element_66 = mod_consts[149];
                tmp_list_element_4 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_92;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_66);
                    tmp_expression_value_92 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[24]);

                    if (tmp_expression_value_92 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_92 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_92);
                        } else {
                            goto tuple_build_exception_52;
                        }
                    }

                    tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_92);
                    if (tmp_tuple_element_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 160;
                        generator_heap->type_description_2 = "oc";
                        goto tuple_build_exception_52;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_66);
                }
                goto tuple_build_noexception_52;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_52:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_52:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 4, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(generator_heap->tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[39], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 155;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_10;
            struct Nuitka_CellObject *tmp_closure_10[2];
            tmp_annotations_10 = PyDict_Copy(mod_consts[40]);

            tmp_closure_10[0] = generator_heap->var_ctypes;
            Py_INCREF(tmp_closure_10[0]);
            tmp_closure_10[1] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_10[1]);

            generator_heap->tmp_dictset_value = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__7___del__(tmp_annotations_10, tmp_closure_10);

            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[41], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 163;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_6;
            }
        }
        {
            nuitka_bool tmp_condition_result_33;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_11;
            struct Nuitka_CellObject *tmp_closure_11[1];
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_12;
            struct Nuitka_CellObject *tmp_closure_12[1];
            generator_heap->tmp_res = MAPPING_HAS_ITEM(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[43]);

            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 167;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_6;
            }
            tmp_condition_result_33 = (generator_heap->tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_25 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[43]);

            if (unlikely(tmp_called_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[43]);
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 167;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_6;
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 167;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_6;
            }
            tmp_annotations_11 = PyDict_Copy(mod_consts[151]);

            tmp_closure_11[0] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_11[0]);

            tmp_args_element_value_15 = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__8_crtc(tmp_annotations_11, tmp_closure_11);

            generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6->m_frame.f_lineno = 167;
            generator_heap->tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_15);
            if (generator_heap->tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 167;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_6;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_26 = (PyObject *)&PyProperty_Type;
            tmp_annotations_12 = PyDict_Copy(mod_consts[151]);

            tmp_closure_12[0] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_12[0]);

            tmp_args_element_value_16 = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__8_crtc(tmp_annotations_12, tmp_closure_12);

            generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6->m_frame.f_lineno = 167;
            generator_heap->tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (generator_heap->tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 167;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_6;
            }
            condexpr_end_14:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[152], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 168;
                generator_heap->type_description_2 = "oc";
                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6);
#endif

        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6,
            generator_heap->type_description_2,
            generator_heap->outline_4_var___class__,
            generator_heap->var_ctypes
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6 == cache_frame_5f63aa2fbbc2753a6192774459c11106_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_5f63aa2fbbc2753a6192774459c11106_6);
            cache_frame_5f63aa2fbbc2753a6192774459c11106_6 = NULL;
        }

        assertFrameObject(generator_heap->frame_5f63aa2fbbc2753a6192774459c11106_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_34;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = generator_heap->tmp_class_creation_5__bases;
            CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = generator_heap->tmp_class_creation_5__bases_orig;
            tmp_condition_result_34 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_34 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 154;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto try_except_handler_16;
            }
            if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases_orig);
        generator_heap->tmp_dictset_value = generator_heap->tmp_class_creation_5__bases_orig;
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154, mod_consts[20], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_16;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(generator_heap->tmp_class_creation_5__metaclass);
            tmp_called_value_27 = generator_heap->tmp_class_creation_5__metaclass;
            tmp_tuple_element_67 = mod_consts[142];
            tmp_args_value_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_67);
            CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases);
            tmp_tuple_element_67 = generator_heap->tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_67);
            tmp_tuple_element_67 = generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_67);
            CHECK_OBJECT(generator_heap->tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = generator_heap->tmp_class_creation_5__class_decl_dict;
            generator->m_frame->m_frame.f_lineno = 154;
            tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_27, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 154;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto try_except_handler_16;
            }
            assert(generator_heap->outline_4_var___class__ == NULL);
            generator_heap->outline_4_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(generator_heap->outline_4_var___class__);
        tmp_assign_source_43 = generator_heap->outline_4_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        generator_heap->exception_keeper_type_13 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_13 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_13 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_13;
        generator_heap->exception_value = generator_heap->exception_keeper_value_13;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_13;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(generator_heap->outline_4_var___class__);
        Py_DECREF(generator_heap->outline_4_var___class__);
        generator_heap->outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        generator_heap->exception_keeper_type_14 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_14 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_14 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_14;
        generator_heap->exception_value = generator_heap->exception_keeper_value_14;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_14;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        generator_heap->exception_lineno = 154;
        goto try_except_handler_14;
        outline_result_5:;
        assert(generator_heap->var_DrmModeEncoder == NULL);
        generator_heap->var_DrmModeEncoder = tmp_assign_source_43;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_14:;
    generator_heap->exception_keeper_type_15 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_15 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_15 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_5__bases_orig);
    generator_heap->tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_5__bases);
    generator_heap->tmp_class_creation_5__bases = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_5__class_decl_dict);
    generator_heap->tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_5__metaclass);
    generator_heap->tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_5__prepared);
    generator_heap->tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_15;
    generator_heap->exception_value = generator_heap->exception_keeper_value_15;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_15;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_5__bases_orig);
    generator_heap->tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_5__bases);
    Py_DECREF(generator_heap->tmp_class_creation_5__bases);
    generator_heap->tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_5__class_decl_dict);
    Py_DECREF(generator_heap->tmp_class_creation_5__class_decl_dict);
    generator_heap->tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_5__metaclass);
    Py_DECREF(generator_heap->tmp_class_creation_5__metaclass);
    generator_heap->tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_5__prepared);
    Py_DECREF(generator_heap->tmp_class_creation_5__prepared);
    generator_heap->tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_68;
        CHECK_OBJECT(generator_heap->var_DrmBase);
        tmp_tuple_element_68 = generator_heap->var_DrmBase;
        tmp_assign_source_45 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_68);
        assert(generator_heap->tmp_class_creation_6__bases_orig == NULL);
        generator_heap->tmp_class_creation_6__bases_orig = tmp_assign_source_45;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = generator_heap->tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_46 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_17;
        }
        assert(generator_heap->tmp_class_creation_6__bases == NULL);
        generator_heap->tmp_class_creation_6__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = PyDict_New();
        assert(generator_heap->tmp_class_creation_6__class_decl_dict == NULL);
        generator_heap->tmp_class_creation_6__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_value_6;
        bool tmp_condition_result_35;
        PyObject *tmp_key_value_16;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_key_value_17;
        nuitka_bool tmp_condition_result_36;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_6;
        tmp_key_value_16 = mod_consts[7];
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_16 = generator_heap->tmp_class_creation_6__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_16, tmp_key_value_16);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_35 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_17 = generator_heap->tmp_class_creation_6__class_decl_dict;
        tmp_key_value_17 = mod_consts[7];
        tmp_metaclass_value_6 = DICT_GET_ITEM0(tmp_dict_arg_value_17, tmp_key_value_17);
        if (tmp_metaclass_value_6 == NULL) {
            tmp_metaclass_value_6 = Py_None;
        }
        assert(!(tmp_metaclass_value_6 == NULL));
        Py_INCREF(tmp_metaclass_value_6);
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(generator_heap->tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_17;
        }
        tmp_condition_result_36 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases);
        tmp_expression_value_93 = generator_heap->tmp_class_creation_6__bases;
        tmp_subscript_value_12 = mod_consts[1];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_93, tmp_subscript_value_12, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_17;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_17;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_16:;
        condexpr_end_15:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases);
        tmp_bases_value_6 = generator_heap->tmp_class_creation_6__bases;
        tmp_assign_source_48 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_17;
        }
        assert(generator_heap->tmp_class_creation_6__metaclass == NULL);
        generator_heap->tmp_class_creation_6__metaclass = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_37;
        PyObject *tmp_key_value_18;
        PyObject *tmp_dict_arg_value_18;
        tmp_key_value_18 = mod_consts[7];
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_18 = generator_heap->tmp_class_creation_6__class_decl_dict;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_18, tmp_key_value_18);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_37 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_6__class_decl_dict);
    generator_heap->tmp_dictdel_dict = generator_heap->tmp_class_creation_6__class_decl_dict;
    generator_heap->tmp_dictdel_key = mod_consts[7];
    generator_heap->tmp_result = DICT_REMOVE_ITEM(generator_heap->tmp_dictdel_dict, generator_heap->tmp_dictdel_key);
    if (generator_heap->tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 174;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_17;
    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__metaclass);
        tmp_expression_value_94 = generator_heap->tmp_class_creation_6__metaclass;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_94, mod_consts[8]);
        tmp_condition_result_38 = (generator_heap->tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__metaclass);
        tmp_expression_value_95 = generator_heap->tmp_class_creation_6__metaclass;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[8]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_17;
        }
        tmp_tuple_element_69 = mod_consts[47];
        tmp_args_value_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_69);
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases);
        tmp_tuple_element_69 = generator_heap->tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_69);
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = generator_heap->tmp_class_creation_6__class_decl_dict;
        generator->m_frame->m_frame.f_lineno = 174;
        tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_28, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_17;
        }
        assert(generator_heap->tmp_class_creation_6__prepared == NULL);
        generator_heap->tmp_class_creation_6__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_96;
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__prepared);
        tmp_expression_value_96 = generator_heap->tmp_class_creation_6__prepared;
        generator_heap->tmp_result = HAS_ATTR_BOOL(tmp_expression_value_96, mod_consts[10]);
        tmp_operand_value_6 = (generator_heap->tmp_result) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_17;
        }
        tmp_condition_result_39 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_70;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[11];
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = generator_heap->tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[12];
        tmp_getattr_default_6 = mod_consts[13];
        tmp_tuple_element_70 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_17;
        }
        tmp_mod_expr_right_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_97;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_70);
            CHECK_OBJECT(generator_heap->tmp_class_creation_6__prepared);
            tmp_type_arg_12 = generator_heap->tmp_class_creation_6__prepared;
            tmp_expression_value_97 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_97 == NULL));
            tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[12]);
            Py_DECREF(tmp_expression_value_97);
            if (tmp_tuple_element_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 174;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_70);
        }
        goto tuple_build_noexception_53;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_53:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_53:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_17;
        }
        generator_heap->exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        generator_heap->exception_value = tmp_raise_value_6;
        generator_heap->exception_lineno = 174;
        RAISE_EXCEPTION_IMPLICIT(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_17;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = PyDict_New();
        assert(generator_heap->tmp_class_creation_6__prepared == NULL);
        generator_heap->tmp_class_creation_6__prepared = tmp_assign_source_50;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(generator_heap->tmp_class_creation_6__prepared);
            tmp_set_locals_6 = generator_heap->tmp_class_creation_6__prepared;
            generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        generator_heap->tmp_dictset_value = mod_consts[14];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[15], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_19;
        }
        generator_heap->tmp_dictset_value = mod_consts[154];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[17], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_19;
        }
        if (isFrameUnusable(cache_frame_052b5b823acc7db183cca0945a028019_7)) {
            Py_XDECREF(cache_frame_052b5b823acc7db183cca0945a028019_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_052b5b823acc7db183cca0945a028019_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_052b5b823acc7db183cca0945a028019_7 = MAKE_FUNCTION_FRAME(codeobj_052b5b823acc7db183cca0945a028019, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_052b5b823acc7db183cca0945a028019_7->m_type_description == NULL);
        generator_heap->frame_052b5b823acc7db183cca0945a028019_7 = cache_frame_052b5b823acc7db183cca0945a028019_7;

        // Push the new frame as the currently active one.
        pushFrameStack(generator_heap->frame_052b5b823acc7db183cca0945a028019_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(generator_heap->frame_052b5b823acc7db183cca0945a028019_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_tuple_element_71;
            tmp_tuple_element_71 = mod_consts[147];
            tmp_list_element_5 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_98;
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_71);
                tmp_expression_value_98 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[24]);

                if (tmp_expression_value_98 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                        tmp_expression_value_98 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                        Py_INCREF(tmp_expression_value_98);
                    } else {
                        goto tuple_build_exception_54;
                    }
                }

                tmp_tuple_element_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[28]);
                Py_DECREF(tmp_expression_value_98);
                if (tmp_tuple_element_71 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 176;
                    generator_heap->type_description_2 = "oco";
                    goto tuple_build_exception_54;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_71);
            }
            goto tuple_build_noexception_54;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_54:;
            Py_DECREF(tmp_list_element_5);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_54:;
            generator_heap->tmp_dictset_value = PyList_New(9);
            {
                PyObject *tmp_tuple_element_72;
                PyObject *tmp_tuple_element_73;
                PyObject *tmp_tuple_element_74;
                PyObject *tmp_tuple_element_75;
                PyObject *tmp_tuple_element_76;
                PyObject *tmp_tuple_element_77;
                PyObject *tmp_tuple_element_78;
                PyObject *tmp_tuple_element_79;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 0, tmp_list_element_5);
                tmp_tuple_element_72 = mod_consts[155];
                tmp_list_element_5 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_99;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_72);
                    tmp_expression_value_99 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[24]);

                    if (tmp_expression_value_99 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_99 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_99);
                        } else {
                            goto tuple_build_exception_55;
                        }
                    }

                    tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_99);
                    if (tmp_tuple_element_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 177;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_55;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_72);
                }
                goto tuple_build_noexception_55;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_55:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_55:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 1, tmp_list_element_5);
                tmp_tuple_element_73 = mod_consts[156];
                tmp_list_element_5 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_100;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_73);
                    tmp_expression_value_100 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[24]);

                    if (tmp_expression_value_100 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_100 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_100);
                        } else {
                            goto tuple_build_exception_56;
                        }
                    }

                    tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_100);
                    if (tmp_tuple_element_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 178;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_56;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_73);
                }
                goto tuple_build_noexception_56;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_56:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_56:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 2, tmp_list_element_5);
                tmp_tuple_element_74 = mod_consts[157];
                tmp_list_element_5 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_101;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_74);
                    tmp_expression_value_101 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[24]);

                    if (tmp_expression_value_101 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_101 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_101);
                        } else {
                            goto tuple_build_exception_57;
                        }
                    }

                    tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_101);
                    if (tmp_tuple_element_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 179;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_57;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_74);
                }
                goto tuple_build_noexception_57;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_57:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_57:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 3, tmp_list_element_5);
                tmp_tuple_element_75 = mod_consts[158];
                tmp_list_element_5 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_102;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_75);
                    tmp_expression_value_102 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[24]);

                    if (tmp_expression_value_102 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_102 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_102);
                        } else {
                            goto tuple_build_exception_58;
                        }
                    }

                    tmp_tuple_element_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_102);
                    if (tmp_tuple_element_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 180;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_58;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_75);
                }
                goto tuple_build_noexception_58;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_58:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_58:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 4, tmp_list_element_5);
                tmp_tuple_element_76 = mod_consts[159];
                tmp_list_element_5 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_103;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_76);
                    tmp_expression_value_103 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[24]);

                    if (tmp_expression_value_103 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_103 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_103);
                        } else {
                            goto tuple_build_exception_59;
                        }
                    }

                    tmp_tuple_element_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[28]);
                    Py_DECREF(tmp_expression_value_103);
                    if (tmp_tuple_element_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 181;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_59;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_76);
                }
                goto tuple_build_noexception_59;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_59:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_59:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 5, tmp_list_element_5);
                tmp_tuple_element_77 = mod_consts[160];
                tmp_list_element_5 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_104;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_77);
                    tmp_expression_value_104 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[24]);

                    if (tmp_expression_value_104 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_104 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_104);
                        } else {
                            goto tuple_build_exception_60;
                        }
                    }

                    tmp_tuple_element_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[25]);
                    Py_DECREF(tmp_expression_value_104);
                    if (tmp_tuple_element_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 182;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_60;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_77);
                }
                goto tuple_build_noexception_60;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_60:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_60:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 6, tmp_list_element_5);
                tmp_tuple_element_78 = mod_consts[161];
                tmp_list_element_5 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_78);
                tmp_tuple_element_78 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[53]);

                if (tmp_tuple_element_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        CHECK_OBJECT(generator_heap->var_DrmModeModeInfo);
                        tmp_tuple_element_78 = generator_heap->var_DrmModeModeInfo;
                        Py_INCREF(tmp_tuple_element_78);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_78);
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 7, tmp_list_element_5);
                tmp_tuple_element_79 = mod_consts[162];
                tmp_list_element_5 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_105;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_79);
                    tmp_expression_value_105 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[24]);

                    if (tmp_expression_value_105 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
                            tmp_expression_value_105 = Nuitka_Cell_GET(generator_heap->var_ctypes);
                            Py_INCREF(tmp_expression_value_105);
                        } else {
                            goto tuple_build_exception_61;
                        }
                    }

                    tmp_tuple_element_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[25]);
                    Py_DECREF(tmp_expression_value_105);
                    if (tmp_tuple_element_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 184;
                        generator_heap->type_description_2 = "oco";
                        goto tuple_build_exception_61;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_79);
                }
                goto tuple_build_noexception_61;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_61:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_61:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 8, tmp_list_element_5);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(generator_heap->tmp_dictset_value);
            goto frame_exception_exit_7;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[39], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 175;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_annotations_13;
            struct Nuitka_CellObject *tmp_closure_13[2];
            tmp_annotations_13 = PyDict_Copy(mod_consts[40]);

            tmp_closure_13[0] = generator_heap->var_ctypes;
            Py_INCREF(tmp_closure_13[0]);
            tmp_closure_13[1] = generator_heap->var_libdrm;
            Py_INCREF(tmp_closure_13[1]);

            generator_heap->tmp_dictset_value = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__9___del__(tmp_annotations_13, tmp_closure_13);

            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[41], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 187;
                generator_heap->type_description_2 = "oco";
                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_052b5b823acc7db183cca0945a028019_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(generator_heap->frame_052b5b823acc7db183cca0945a028019_7);
#endif

        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_052b5b823acc7db183cca0945a028019_7, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_052b5b823acc7db183cca0945a028019_7->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_052b5b823acc7db183cca0945a028019_7, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_052b5b823acc7db183cca0945a028019_7,
            generator_heap->type_description_2,
            generator_heap->outline_5_var___class__,
            generator_heap->var_ctypes,
            generator_heap->var_DrmModeModeInfo
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_052b5b823acc7db183cca0945a028019_7 == cache_frame_052b5b823acc7db183cca0945a028019_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_052b5b823acc7db183cca0945a028019_7);
            cache_frame_052b5b823acc7db183cca0945a028019_7 = NULL;
        }

        assertFrameObject(generator_heap->frame_052b5b823acc7db183cca0945a028019_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_19;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = generator_heap->tmp_class_creation_6__bases;
            CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = generator_heap->tmp_class_creation_6__bases_orig;
            tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 174;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto try_except_handler_19;
            }
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases_orig);
        generator_heap->tmp_dictset_value = generator_heap->tmp_class_creation_6__bases_orig;
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174, mod_consts[20], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_19;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_80;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(generator_heap->tmp_class_creation_6__metaclass);
            tmp_called_value_29 = generator_heap->tmp_class_creation_6__metaclass;
            tmp_tuple_element_80 = mod_consts[47];
            tmp_args_value_12 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_80);
            CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases);
            tmp_tuple_element_80 = generator_heap->tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_80);
            tmp_tuple_element_80 = generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_80);
            CHECK_OBJECT(generator_heap->tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = generator_heap->tmp_class_creation_6__class_decl_dict;
            generator->m_frame->m_frame.f_lineno = 174;
            tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_29, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 174;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto try_except_handler_19;
            }
            assert(generator_heap->outline_5_var___class__ == NULL);
            generator_heap->outline_5_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(generator_heap->outline_5_var___class__);
        tmp_assign_source_51 = generator_heap->outline_5_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        generator_heap->exception_keeper_type_16 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_16 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_16 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_16 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_DECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174);
        generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_16;
        generator_heap->exception_value = generator_heap->exception_keeper_value_16;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_16;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_16;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(generator_heap->outline_5_var___class__);
        Py_DECREF(generator_heap->outline_5_var___class__);
        generator_heap->outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        generator_heap->exception_keeper_type_17 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_17 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_17 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_17 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_17;
        generator_heap->exception_value = generator_heap->exception_keeper_value_17;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_17;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        generator_heap->exception_lineno = 174;
        goto try_except_handler_17;
        outline_result_6:;
        assert(generator_heap->var_DrmModeCrtc == NULL);
        generator_heap->var_DrmModeCrtc = tmp_assign_source_51;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_17:;
    generator_heap->exception_keeper_type_18 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_18 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_18 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_18 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_6__bases_orig);
    generator_heap->tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_6__bases);
    generator_heap->tmp_class_creation_6__bases = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_6__class_decl_dict);
    generator_heap->tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_6__metaclass);
    generator_heap->tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_6__prepared);
    generator_heap->tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_18;
    generator_heap->exception_value = generator_heap->exception_keeper_value_18;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_18;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_6__bases_orig);
    generator_heap->tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_6__bases);
    Py_DECREF(generator_heap->tmp_class_creation_6__bases);
    generator_heap->tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_6__class_decl_dict);
    Py_DECREF(generator_heap->tmp_class_creation_6__class_decl_dict);
    generator_heap->tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_6__metaclass);
    Py_DECREF(generator_heap->tmp_class_creation_6__metaclass);
    generator_heap->tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_6__prepared);
    Py_DECREF(generator_heap->tmp_class_creation_6__prepared);
    generator_heap->tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_list_element_6;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_107;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_expression_value_106 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        tmp_list_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[25]);
        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 191;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_value_1, 0, tmp_list_element_6);
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_107 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[164]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            generator_heap->exception_lineno = 191;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[165], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 191;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_108;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_called_instance_1 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        CHECK_OBJECT(generator_heap->var_DrmModeRes);
        tmp_args_element_value_17 = generator_heap->var_DrmModeRes;
        generator->m_frame->m_frame.f_lineno = 192;
        tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[27], tmp_args_element_value_17);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_108 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[164]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_2);

            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[166], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_109;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_called_instance_2 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        CHECK_OBJECT(generator_heap->var_DrmModeRes);
        tmp_args_element_value_18 = generator_heap->var_DrmModeRes;
        generator->m_frame->m_frame.f_lineno = 193;
        tmp_list_element_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[27], tmp_args_element_value_18);
        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_7);
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_109 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[167]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[165], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_110;
        tmp_assattr_value_4 = Py_None;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_110 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[167]);
        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 194;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[166], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 194;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_list_element_8;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_113;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_expression_value_111 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        tmp_list_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[25]);
        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = PyList_New(2);
        {
            PyObject *tmp_expression_value_112;
            PyList_SET_ITEM(tmp_assattr_value_5, 0, tmp_list_element_8);
            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
            tmp_expression_value_112 = Nuitka_Cell_GET(generator_heap->var_ctypes);
            tmp_list_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[28]);
            if (tmp_list_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 195;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_assattr_value_5, 1, tmp_list_element_8);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_113 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[168]);
        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[165], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_114;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_called_instance_3 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_DrmModeConnector));
        tmp_args_element_value_19 = Nuitka_Cell_GET(generator_heap->var_DrmModeConnector);
        generator->m_frame->m_frame.f_lineno = 196;
        tmp_assattr_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[27], tmp_args_element_value_19);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_114 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[168]);
        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[166], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_list_element_9;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_expression_value_115;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_called_instance_4 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_DrmModeConnector));
        tmp_args_element_value_20 = Nuitka_Cell_GET(generator_heap->var_DrmModeConnector);
        generator->m_frame->m_frame.f_lineno = 197;
        tmp_list_element_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[27], tmp_args_element_value_20);
        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 197;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_7 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_value_7, 0, tmp_list_element_9);
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_115 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[169]);
        if (tmp_assattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            generator_heap->exception_lineno = 197;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[165], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 197;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_expression_value_116;
        tmp_assattr_value_8 = Py_None;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_116 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[169]);
        if (tmp_assattr_target_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 198;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[166], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_target_8);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 198;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_list_element_10;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_119;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_expression_value_117 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        tmp_list_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[25]);
        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_9 = PyList_New(2);
        {
            PyObject *tmp_expression_value_118;
            PyList_SET_ITEM(tmp_assattr_value_9, 0, tmp_list_element_10);
            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
            tmp_expression_value_118 = Nuitka_Cell_GET(generator_heap->var_ctypes);
            tmp_list_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[28]);
            if (tmp_list_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 199;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assattr_value_9, 1, tmp_list_element_10);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_119 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[170]);
        if (tmp_assattr_target_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[165], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_expression_value_120;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_called_instance_5 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        CHECK_OBJECT(generator_heap->var_DrmModeEncoder);
        tmp_args_element_value_21 = generator_heap->var_DrmModeEncoder;
        generator->m_frame->m_frame.f_lineno = 200;
        tmp_assattr_value_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[27], tmp_args_element_value_21);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 200;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_120 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[170]);
        if (tmp_assattr_target_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            generator_heap->exception_lineno = 200;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[166], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 200;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_list_element_11;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_121;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_called_instance_6 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        CHECK_OBJECT(generator_heap->var_DrmModeEncoder);
        tmp_args_element_value_22 = generator_heap->var_DrmModeEncoder;
        generator->m_frame->m_frame.f_lineno = 201;
        tmp_list_element_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[27], tmp_args_element_value_22);
        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 201;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_11 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_value_11, 0, tmp_list_element_11);
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_121 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[171]);
        if (tmp_assattr_target_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            generator_heap->exception_lineno = 201;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[165], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 201;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_122;
        tmp_assattr_value_12 = Py_None;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_122 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[171]);
        if (tmp_assattr_target_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 202;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[166], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 202;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_list_element_12;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_expression_value_125;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_expression_value_123 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        tmp_list_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[25]);
        if (tmp_list_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 203;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_13 = PyList_New(2);
        {
            PyObject *tmp_expression_value_124;
            PyList_SET_ITEM(tmp_assattr_value_13, 0, tmp_list_element_12);
            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
            tmp_expression_value_124 = Nuitka_Cell_GET(generator_heap->var_ctypes);
            tmp_list_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[28]);
            if (tmp_list_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 203;
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_assattr_value_13, 1, tmp_list_element_12);
        }
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_125 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[172]);
        if (tmp_assattr_target_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            generator_heap->exception_lineno = 203;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[165], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_target_13);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 203;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_expression_value_126;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_called_instance_7 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        CHECK_OBJECT(generator_heap->var_DrmModeCrtc);
        tmp_args_element_value_23 = generator_heap->var_DrmModeCrtc;
        generator->m_frame->m_frame.f_lineno = 204;
        tmp_assattr_value_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[27], tmp_args_element_value_23);
        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 204;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_126 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[172]);
        if (tmp_assattr_target_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            generator_heap->exception_lineno = 204;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[166], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_target_14);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 204;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_list_element_13;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_expression_value_127;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_ctypes));
        tmp_called_instance_8 = Nuitka_Cell_GET(generator_heap->var_ctypes);
        CHECK_OBJECT(generator_heap->var_DrmModeCrtc);
        tmp_args_element_value_24 = generator_heap->var_DrmModeCrtc;
        generator->m_frame->m_frame.f_lineno = 205;
        tmp_list_element_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[27], tmp_args_element_value_24);
        if (tmp_list_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 205;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_15 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_value_15, 0, tmp_list_element_13);
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_127 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[173]);
        if (tmp_assattr_target_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            generator_heap->exception_lineno = 205;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[165], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_target_15);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 205;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_expression_value_128;
        tmp_assattr_value_16 = Py_None;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_libdrm));
        tmp_expression_value_128 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        tmp_assattr_target_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[173]);
        if (tmp_assattr_target_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 206;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[166], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_target_16);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 206;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[174];
        assert(generator_heap->var_DRM_DEV_NAME == NULL);
        Py_INCREF(tmp_assign_source_53);
        generator_heap->var_DRM_DEV_NAME = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_annotations_14;
        struct Nuitka_CellObject *tmp_closure_14[1];
        tmp_annotations_14 = PyDict_Copy(mod_consts[175]);

        tmp_closure_14[0] = generator_heap->var_DrmModeConnector;
        Py_INCREF(tmp_closure_14[0]);

        tmp_assign_source_54 = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__10_get_connector_name(tmp_annotations_14, tmp_closure_14);

        assert(generator_heap->var_get_connector_name == NULL);
        generator_heap->var_get_connector_name = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[178];
        tmp_assign_source_55 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_55 == NULL));
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_55;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_56 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_56 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                generator_heap->exception_lineno = 240;
                goto try_except_handler_20;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_57 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_card_no;
            generator_heap->var_card_no = tmp_assign_source_57;
            Py_INCREF(generator_heap->var_card_no);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_81;
        if (generator_heap->var_DRM_DEV_NAME == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[179]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_20;
        }

        tmp_mod_expr_left_7 = generator_heap->var_DRM_DEV_NAME;
        tmp_tuple_element_81 = mod_consts[180];
        tmp_mod_expr_right_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_7, 0, tmp_tuple_element_81);
        CHECK_OBJECT(generator_heap->var_card_no);
        tmp_tuple_element_81 = generator_heap->var_card_no;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_7, 1, tmp_tuple_element_81);
        tmp_assign_source_58 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = generator_heap->var_card_path;
            generator_heap->var_card_path = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_130;
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 243;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_21;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[182]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 243;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_21;
        }
        CHECK_OBJECT(generator_heap->var_card_path);
        tmp_args_element_value_25 = generator_heap->var_card_path;
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_30);

            generator_heap->exception_lineno = 243;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_21;
        }
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[183]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_30);

            generator_heap->exception_lineno = 243;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_21;
        }
        generator->m_frame->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 243;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = generator_heap->var_fd;
            generator_heap->var_fd = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_21:;
    generator_heap->exception_keeper_type_19 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_19 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_19 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_19 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_type_1, &generator_heap->exception_preserved_value_1, &generator_heap->exception_preserved_tb_1);

    if (generator_heap->exception_keeper_tb_19 == NULL) {
        generator_heap->exception_keeper_tb_19 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_19);
    } else if (generator_heap->exception_keeper_lineno_19 != 0) {
        generator_heap->exception_keeper_tb_19 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_19, generator->m_frame, generator_heap->exception_keeper_lineno_19);
    }

    NORMALIZE_EXCEPTION(&generator_heap->exception_keeper_type_19, &generator_heap->exception_keeper_value_19, &generator_heap->exception_keeper_tb_19);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(generator_heap->exception_keeper_value_19, generator_heap->exception_keeper_tb_19);
    PUBLISH_EXCEPTION(&generator_heap->exception_keeper_type_19, &generator_heap->exception_keeper_value_19, &generator_heap->exception_keeper_tb_19);
    // Tried code:
    {
        bool tmp_condition_result_41;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_OSError;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_41 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    goto try_continue_handler_22;
    goto branch_end_25;
    branch_no_25:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 242;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cocooocooNNoooooooo";
    goto try_except_handler_22;
    branch_end_25:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_22:;
    generator_heap->exception_keeper_type_20 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_20 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_20 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_20 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(generator_heap->exception_preserved_type_1, generator_heap->exception_preserved_value_1, generator_heap->exception_preserved_tb_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_20;
    generator_heap->exception_value = generator_heap->exception_keeper_value_20;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_20;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_20;

    goto try_except_handler_20;
    // try continue handler code:
    try_continue_handler_22:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(generator_heap->exception_preserved_type_1, generator_heap->exception_preserved_value_1, generator_heap->exception_preserved_tb_1);

    goto loop_start_1;
    // End of try:
    // End of try:
    try_end_7:;
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(generator_heap->var_fd);
        tmp_cmp_expr_left_8 = generator_heap->var_fd;
        tmp_cmp_expr_right_8 = mod_consts[1];
        tmp_condition_result_42 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 246;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_20;
        }
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    goto loop_start_1;
    branch_no_26:;
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_27;
        if (Nuitka_Cell_GET(generator_heap->var_libdrm) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[184]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_23;
        }

        tmp_called_instance_9 = Nuitka_Cell_GET(generator_heap->var_libdrm);
        CHECK_OBJECT(generator_heap->var_fd);
        tmp_args_element_value_27 = generator_heap->var_fd;
        generator->m_frame->m_frame.f_lineno = 250;
        tmp_assign_source_60 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[164], tmp_args_element_value_27);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = generator_heap->var_res;
            generator_heap->var_res = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_7;
        CHECK_OBJECT(generator_heap->var_res);
        tmp_operand_value_7 = generator_heap->var_res;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_23;
        }
        tmp_condition_result_43 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_called_value_31;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_23;
        }
        generator->m_frame->m_frame.f_lineno = 252;
        tmp_raise_type_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[186]);

        if (tmp_raise_type_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_23;
        }
        generator_heap->exception_type = tmp_raise_type_7;
        generator_heap->exception_lineno = 252;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_23;
    }
    branch_no_27:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_expression_value_131;
        CHECK_OBJECT(generator_heap->var_res);
        tmp_expression_value_131 = generator_heap->var_res;
        tmp_assign_source_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[187]);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 254;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = generator_heap->var_res;
            assert(old != NULL);
            generator_heap->var_res = tmp_assign_source_61;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(generator_heap->var_fd);
        tmp_assattr_value_17 = generator_heap->var_fd;
        CHECK_OBJECT(generator_heap->var_res);
        tmp_assattr_target_17 = generator_heap->var_res;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[18], tmp_assattr_value_17);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 255;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_23;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_value_18 = Py_True;
        CHECK_OBJECT(generator_heap->var_res);
        tmp_assattr_target_18 = generator_heap->var_res;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[19], tmp_assattr_value_18);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 256;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_23;
        }
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_132;
        CHECK_OBJECT(generator_heap->var_res);
        tmp_expression_value_132 = generator_heap->var_res;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[51]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_62 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
            generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_63 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_63 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cocooocooNNoooooooo";
                generator_heap->exception_lineno = 258;
                goto try_except_handler_24;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_assign_source_64 = generator_heap->tmp_for_loop_2__iter_value;
        {
            PyObject *old = generator_heap->var_connector;
            generator_heap->var_connector = tmp_assign_source_64;
            Py_INCREF(generator_heap->var_connector);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_44;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_expression_value_134;
        CHECK_OBJECT(generator_heap->var_connector);
        tmp_expression_value_133 = generator_heap->var_connector;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[128]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        if (Nuitka_Cell_GET(generator_heap->var_DrmModeConnector) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[50]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }

        tmp_expression_value_134 = Nuitka_Cell_GET(generator_heap->var_DrmModeConnector);
        tmp_cmp_expr_right_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[77]);
        if (tmp_cmp_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_9);

            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        tmp_condition_result_44 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        Py_DECREF(tmp_cmp_expr_right_9);
        if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_expression_value_136;
        CHECK_OBJECT(generator_heap->var_connector);
        tmp_expression_value_136 = generator_heap->var_connector;
        tmp_expression_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[143]);
        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        tmp_assign_source_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[152]);
        Py_DECREF(tmp_expression_value_135);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        {
            PyObject *old = generator_heap->var_crtc;
            generator_heap->var_crtc = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_137;
        PyObject *tmp_called_value_32;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_28;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(generator_heap->var_crtc);
        tmp_expression_value_138 = generator_heap->var_crtc;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[156]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 262;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(generator_heap->var_crtc);
        tmp_expression_value_139 = generator_heap->var_crtc;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[157]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(generator_heap->var_crtc);
        tmp_expression_value_140 = generator_heap->var_crtc;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[158]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(generator_heap->var_crtc);
        tmp_expression_value_141 = generator_heap->var_crtc;
        tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[159]);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(generator_heap->var_connector);
        tmp_expression_value_142 = generator_heap->var_connector;
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[130]);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            generator_heap->exception_lineno = 266;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(generator_heap->var_connector);
        tmp_expression_value_143 = generator_heap->var_connector;
        tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[131]);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        if (generator_heap->var_get_connector_name == NULL) {
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[176]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }

        tmp_called_value_33 = generator_heap->var_get_connector_name;
        CHECK_OBJECT(generator_heap->var_connector);
        tmp_args_element_value_28 = generator_heap->var_connector;
        generator->m_frame->m_frame.f_lineno = 268;
        tmp_kw_call_value_6_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_28);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        generator->m_frame->m_frame.f_lineno = 261;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};

            tmp_expression_value_137 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_32, kw_values, mod_consts[189]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_32, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_expression_value_138, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_expression_value_139, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_expression_value_140, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_expression_value_141, sizeof(PyObject *), &tmp_kw_call_value_4_1, sizeof(PyObject *), &tmp_expression_value_142, sizeof(PyObject *), &tmp_kw_call_value_5_1, sizeof(PyObject *), &tmp_expression_value_143, sizeof(PyObject *), &tmp_kw_call_value_6_1, sizeof(PyObject *), &tmp_called_value_33, sizeof(PyObject *), &tmp_args_element_value_28, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_137;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_32, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_expression_value_138, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_expression_value_139, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_expression_value_140, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_expression_value_141, sizeof(PyObject *), &tmp_kw_call_value_4_1, sizeof(PyObject *), &tmp_expression_value_142, sizeof(PyObject *), &tmp_kw_call_value_5_1, sizeof(PyObject *), &tmp_expression_value_143, sizeof(PyObject *), &tmp_kw_call_value_6_1, sizeof(PyObject *), &tmp_called_value_33, sizeof(PyObject *), &tmp_args_element_value_28, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_24;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_28:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 258;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_24;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_24:;
    generator_heap->exception_keeper_type_21 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_21 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_21 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_21 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_21;
    generator_heap->exception_value = generator_heap->exception_keeper_value_21;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_21;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_21;

    goto try_except_handler_23;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    generator_heap->exception_keeper_type_22 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_22 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_22 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_22 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_type_2, &generator_heap->exception_preserved_value_2, &generator_heap->exception_preserved_tb_2);

    if (generator_heap->exception_keeper_tb_22 == NULL) {
        generator_heap->exception_keeper_tb_22 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_22);
    } else if (generator_heap->exception_keeper_lineno_22 != 0) {
        generator_heap->exception_keeper_tb_22 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_22, generator->m_frame, generator_heap->exception_keeper_lineno_22);
    }

    NORMALIZE_EXCEPTION(&generator_heap->exception_keeper_type_22, &generator_heap->exception_keeper_value_22, &generator_heap->exception_keeper_tb_22);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(generator_heap->exception_keeper_value_22, generator_heap->exception_keeper_tb_22);
    PUBLISH_EXCEPTION(&generator_heap->exception_keeper_type_22, &generator_heap->exception_keeper_value_22, &generator_heap->exception_keeper_tb_22);
    // Tried code:
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_29;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_25;
        }
        CHECK_OBJECT(generator_heap->var_fd);
        tmp_args_element_value_29 = generator_heap->var_fd;
        generator->m_frame->m_frame.f_lineno = 272;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[190], tmp_args_element_value_29);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_25;
        }
        Py_DECREF(tmp_call_result_1);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 249;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cocooocooNNoooooooo";
    goto try_except_handler_25;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_25:;
    generator_heap->exception_keeper_type_23 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_23 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_23 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_23 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(generator_heap->exception_preserved_type_2, generator_heap->exception_preserved_value_2, generator_heap->exception_preserved_tb_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_23;
    generator_heap->exception_value = generator_heap->exception_keeper_value_23;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_23;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_23;

    goto try_except_handler_20;
    // End of try:
    // End of try:
    try_end_9:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_30;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_20;
        }
        CHECK_OBJECT(generator_heap->var_fd);
        tmp_args_element_value_30 = generator_heap->var_fd;
        generator->m_frame->m_frame.f_lineno = 272;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[190], tmp_args_element_value_30);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "cocooocooNNoooooooo";
            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 240;
        generator_heap->type_description_1 = "cocooocooNNoooooooo";
        goto try_except_handler_20;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_20:;
    generator_heap->exception_keeper_type_24 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_24 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_24 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_24 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_24;
    generator_heap->exception_value = generator_heap->exception_keeper_value_24;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_24;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_7;

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
            generator_heap->var_load_library,
            generator_heap->var_libdrm,
            generator_heap->var_DrmBase,
            generator_heap->var_DrmModeRes,
            generator_heap->var_DrmModeModeInfo,
            generator_heap->var_DrmModeConnector,
            generator_heap->var_DrmModeEncoder,
            generator_heap->var_DrmModeCrtc,
            NULL,
            NULL,
            generator_heap->var_DRM_DEV_NAME,
            generator_heap->var_get_connector_name,
            generator_heap->var_card_no,
            generator_heap->var_card_path,
            generator_heap->var_fd,
            generator_heap->var_res,
            generator_heap->var_connector,
            generator_heap->var_crtc
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

    frame_no_exception_7:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_25 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_25 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_25 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_25 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->var_ctypes);
    Py_DECREF(generator_heap->var_ctypes);
    generator_heap->var_ctypes = NULL;
    Py_XDECREF(generator_heap->var_load_library);
    generator_heap->var_load_library = NULL;
    CHECK_OBJECT(generator_heap->var_libdrm);
    Py_DECREF(generator_heap->var_libdrm);
    generator_heap->var_libdrm = NULL;
    Py_XDECREF(generator_heap->var_DrmBase);
    generator_heap->var_DrmBase = NULL;
    Py_XDECREF(generator_heap->var_DrmModeRes);
    generator_heap->var_DrmModeRes = NULL;
    Py_XDECREF(generator_heap->var_DrmModeModeInfo);
    generator_heap->var_DrmModeModeInfo = NULL;
    CHECK_OBJECT(generator_heap->var_DrmModeConnector);
    Py_DECREF(generator_heap->var_DrmModeConnector);
    generator_heap->var_DrmModeConnector = NULL;
    Py_XDECREF(generator_heap->var_DrmModeEncoder);
    generator_heap->var_DrmModeEncoder = NULL;
    Py_XDECREF(generator_heap->var_DrmModeCrtc);
    generator_heap->var_DrmModeCrtc = NULL;
    Py_XDECREF(generator_heap->var_DRM_DEV_NAME);
    generator_heap->var_DRM_DEV_NAME = NULL;
    Py_XDECREF(generator_heap->var_get_connector_name);
    generator_heap->var_get_connector_name = NULL;
    Py_XDECREF(generator_heap->var_card_no);
    generator_heap->var_card_no = NULL;
    Py_XDECREF(generator_heap->var_card_path);
    generator_heap->var_card_path = NULL;
    Py_XDECREF(generator_heap->var_fd);
    generator_heap->var_fd = NULL;
    Py_XDECREF(generator_heap->var_res);
    generator_heap->var_res = NULL;
    Py_XDECREF(generator_heap->var_connector);
    generator_heap->var_connector = NULL;
    Py_XDECREF(generator_heap->var_crtc);
    generator_heap->var_crtc = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_25;
    generator_heap->exception_value = generator_heap->exception_keeper_value_25;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_25;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_25;

    goto function_exception_exit;
    // End of try:
    try_end_11:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(generator_heap->var_ctypes);
    Py_DECREF(generator_heap->var_ctypes);
    generator_heap->var_ctypes = NULL;
    CHECK_OBJECT(generator_heap->var_load_library);
    Py_DECREF(generator_heap->var_load_library);
    generator_heap->var_load_library = NULL;
    CHECK_OBJECT(generator_heap->var_libdrm);
    Py_DECREF(generator_heap->var_libdrm);
    generator_heap->var_libdrm = NULL;
    CHECK_OBJECT(generator_heap->var_DrmBase);
    Py_DECREF(generator_heap->var_DrmBase);
    generator_heap->var_DrmBase = NULL;
    CHECK_OBJECT(generator_heap->var_DrmModeRes);
    Py_DECREF(generator_heap->var_DrmModeRes);
    generator_heap->var_DrmModeRes = NULL;
    CHECK_OBJECT(generator_heap->var_DrmModeModeInfo);
    Py_DECREF(generator_heap->var_DrmModeModeInfo);
    generator_heap->var_DrmModeModeInfo = NULL;
    CHECK_OBJECT(generator_heap->var_DrmModeConnector);
    Py_DECREF(generator_heap->var_DrmModeConnector);
    generator_heap->var_DrmModeConnector = NULL;
    CHECK_OBJECT(generator_heap->var_DrmModeEncoder);
    Py_DECREF(generator_heap->var_DrmModeEncoder);
    generator_heap->var_DrmModeEncoder = NULL;
    CHECK_OBJECT(generator_heap->var_DrmModeCrtc);
    Py_DECREF(generator_heap->var_DrmModeCrtc);
    generator_heap->var_DrmModeCrtc = NULL;
    Py_XDECREF(generator_heap->var_DRM_DEV_NAME);
    generator_heap->var_DRM_DEV_NAME = NULL;
    Py_XDECREF(generator_heap->var_get_connector_name);
    generator_heap->var_get_connector_name = NULL;
    Py_XDECREF(generator_heap->var_card_no);
    generator_heap->var_card_no = NULL;
    Py_XDECREF(generator_heap->var_card_path);
    generator_heap->var_card_path = NULL;
    Py_XDECREF(generator_heap->var_fd);
    generator_heap->var_fd = NULL;
    Py_XDECREF(generator_heap->var_res);
    generator_heap->var_res = NULL;
    Py_XDECREF(generator_heap->var_connector);
    generator_heap->var_connector = NULL;
    Py_XDECREF(generator_heap->var_crtc);
    generator_heap->var_crtc = NULL;

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174);

    return NULL;

    function_exception_exit:
    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_DrmBase_15);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_DrmModeRes_19);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_DrmModeModeInfo_64);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__4_DrmModeConnector_89);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__5_DrmModeEncoder_154);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__6_DrmModeCrtc_174);
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors() {
    return Nuitka_Generator_New(
        screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_context,
        module_screeninfo$enumerators$drm,
        mod_consts[191],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_4c083e771e53fc4b81c611a110b28d5d,
        NULL,
        0,
        sizeof(struct screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals)
    );
}


static PyObject *impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1___del__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_78e2289451c7fc0671042c1b60e5252d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_78e2289451c7fc0671042c1b60e5252d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_78e2289451c7fc0671042c1b60e5252d)) {
        Py_XDECREF(cache_frame_78e2289451c7fc0671042c1b60e5252d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78e2289451c7fc0671042c1b60e5252d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78e2289451c7fc0671042c1b60e5252d = MAKE_FUNCTION_FRAME(codeobj_78e2289451c7fc0671042c1b60e5252d, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_78e2289451c7fc0671042c1b60e5252d->m_type_description == NULL);
    frame_78e2289451c7fc0671042c1b60e5252d = cache_frame_78e2289451c7fc0671042c1b60e5252d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_78e2289451c7fc0671042c1b60e5252d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_78e2289451c7fc0671042c1b60e5252d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 36;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[184]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[167]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_78e2289451c7fc0671042c1b60e5252d->m_frame.f_lineno = 37;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[192], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 37;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_78e2289451c7fc0671042c1b60e5252d->m_frame.f_lineno = 37;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_78e2289451c7fc0671042c1b60e5252d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_78e2289451c7fc0671042c1b60e5252d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78e2289451c7fc0671042c1b60e5252d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78e2289451c7fc0671042c1b60e5252d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78e2289451c7fc0671042c1b60e5252d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78e2289451c7fc0671042c1b60e5252d,
        type_description_1,
        par_self,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_78e2289451c7fc0671042c1b60e5252d == cache_frame_78e2289451c7fc0671042c1b60e5252d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_78e2289451c7fc0671042c1b60e5252d);
        cache_frame_78e2289451c7fc0671042c1b60e5252d = NULL;
    }

    assertFrameObject(frame_78e2289451c7fc0671042c1b60e5252d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_crtcs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_ret = NULL;
    PyObject *var_i = NULL;
    PyObject *var_crtc = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_53b89a6a8d2a1ad7b53f39b116364dd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_53b89a6a8d2a1ad7b53f39b116364dd2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_53b89a6a8d2a1ad7b53f39b116364dd2)) {
        Py_XDECREF(cache_frame_53b89a6a8d2a1ad7b53f39b116364dd2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53b89a6a8d2a1ad7b53f39b116364dd2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53b89a6a8d2a1ad7b53f39b116364dd2 = MAKE_FUNCTION_FRAME(codeobj_53b89a6a8d2a1ad7b53f39b116364dd2, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_53b89a6a8d2a1ad7b53f39b116364dd2->m_type_description == NULL);
    frame_53b89a6a8d2a1ad7b53f39b116364dd2 = cache_frame_53b89a6a8d2a1ad7b53f39b116364dd2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_53b89a6a8d2a1ad7b53f39b116364dd2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_53b89a6a8d2a1ad7b53f39b116364dd2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooc";
                exception_lineno = 42;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_4;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[184]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[172]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[193]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[193]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        frame_53b89a6a8d2a1ad7b53f39b116364dd2->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[187]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_crtc;
            var_crtc = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_assattr_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[193]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[18]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_crtc);
        tmp_assattr_target_1 = var_crtc;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(var_crtc);
        tmp_assattr_target_2 = var_crtc;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[194], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        if (var_ret == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[195]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = var_ret;
        CHECK_OBJECT(var_crtc);
        tmp_args_element_value_3 = var_crtc;
        frame_53b89a6a8d2a1ad7b53f39b116364dd2->m_frame.f_lineno = 46;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[196], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 42;
        type_description_1 = "ooooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_ret == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[195]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 47;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ret;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_53b89a6a8d2a1ad7b53f39b116364dd2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_53b89a6a8d2a1ad7b53f39b116364dd2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_53b89a6a8d2a1ad7b53f39b116364dd2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53b89a6a8d2a1ad7b53f39b116364dd2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53b89a6a8d2a1ad7b53f39b116364dd2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53b89a6a8d2a1ad7b53f39b116364dd2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53b89a6a8d2a1ad7b53f39b116364dd2,
        type_description_1,
        par_self,
        var_ret,
        var_i,
        var_crtc,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_53b89a6a8d2a1ad7b53f39b116364dd2 == cache_frame_53b89a6a8d2a1ad7b53f39b116364dd2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_53b89a6a8d2a1ad7b53f39b116364dd2);
        cache_frame_53b89a6a8d2a1ad7b53f39b116364dd2 = NULL;
    }

    assertFrameObject(frame_53b89a6a8d2a1ad7b53f39b116364dd2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_crtc);
    var_crtc = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_crtc);
    var_crtc = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__3_connectors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_ret = NULL;
    PyObject *var_i = NULL;
    PyObject *var_pconn = NULL;
    PyObject *var_conn = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_12d5c745d97149b2926377672414c39b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_12d5c745d97149b2926377672414c39b = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_12d5c745d97149b2926377672414c39b)) {
        Py_XDECREF(cache_frame_12d5c745d97149b2926377672414c39b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12d5c745d97149b2926377672414c39b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12d5c745d97149b2926377672414c39b = MAKE_FUNCTION_FRAME(codeobj_12d5c745d97149b2926377672414c39b, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_12d5c745d97149b2926377672414c39b->m_type_description == NULL);
    frame_12d5c745d97149b2926377672414c39b = cache_frame_12d5c745d97149b2926377672414c39b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_12d5c745d97149b2926377672414c39b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_12d5c745d97149b2926377672414c39b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooc";
                exception_lineno = 52;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_4;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[184]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[168]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[193]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 54;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[193]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[32]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 54;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 54;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        frame_12d5c745d97149b2926377672414c39b->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pconn;
            var_pconn = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_pconn);
        tmp_operand_value_1 = var_pconn;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_pconn);
        tmp_expression_value_6 = var_pconn;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[187]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_conn;
            var_conn = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_assattr_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[193]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[18]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_conn);
        tmp_assattr_target_1 = var_conn;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(var_conn);
        tmp_assattr_target_2 = var_conn;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[194], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        if (var_ret == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[195]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 61;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = var_ret;
        CHECK_OBJECT(var_conn);
        tmp_args_element_value_3 = var_conn;
        frame_12d5c745d97149b2926377672414c39b->m_frame.f_lineno = 61;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[196], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 52;
        type_description_1 = "oooooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_ret == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[195]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 62;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ret;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12d5c745d97149b2926377672414c39b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_12d5c745d97149b2926377672414c39b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12d5c745d97149b2926377672414c39b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12d5c745d97149b2926377672414c39b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12d5c745d97149b2926377672414c39b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12d5c745d97149b2926377672414c39b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12d5c745d97149b2926377672414c39b,
        type_description_1,
        par_self,
        var_ret,
        var_i,
        var_pconn,
        var_conn,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_12d5c745d97149b2926377672414c39b == cache_frame_12d5c745d97149b2926377672414c39b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_12d5c745d97149b2926377672414c39b);
        cache_frame_12d5c745d97149b2926377672414c39b = NULL;
    }

    assertFrameObject(frame_12d5c745d97149b2926377672414c39b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_pconn);
    var_pconn = NULL;
    Py_XDECREF(var_conn);
    var_conn = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_pconn);
    var_pconn = NULL;
    Py_XDECREF(var_conn);
    var_conn = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__4___del__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_055477107cd12df5acebebe7cdc1159c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_055477107cd12df5acebebe7cdc1159c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_055477107cd12df5acebebe7cdc1159c)) {
        Py_XDECREF(cache_frame_055477107cd12df5acebebe7cdc1159c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_055477107cd12df5acebebe7cdc1159c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_055477107cd12df5acebebe7cdc1159c = MAKE_FUNCTION_FRAME(codeobj_055477107cd12df5acebebe7cdc1159c, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_055477107cd12df5acebebe7cdc1159c->m_type_description == NULL);
    frame_055477107cd12df5acebebe7cdc1159c = cache_frame_055477107cd12df5acebebe7cdc1159c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_055477107cd12df5acebebe7cdc1159c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_055477107cd12df5acebebe7cdc1159c) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 86;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[184]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[197]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_055477107cd12df5acebebe7cdc1159c->m_frame.f_lineno = 87;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[192], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 87;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_055477107cd12df5acebebe7cdc1159c->m_frame.f_lineno = 87;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_055477107cd12df5acebebe7cdc1159c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_055477107cd12df5acebebe7cdc1159c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_055477107cd12df5acebebe7cdc1159c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_055477107cd12df5acebebe7cdc1159c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_055477107cd12df5acebebe7cdc1159c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_055477107cd12df5acebebe7cdc1159c,
        type_description_1,
        par_self,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_055477107cd12df5acebebe7cdc1159c == cache_frame_055477107cd12df5acebebe7cdc1159c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_055477107cd12df5acebebe7cdc1159c);
        cache_frame_055477107cd12df5acebebe7cdc1159c = NULL;
    }

    assertFrameObject(frame_055477107cd12df5acebebe7cdc1159c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__5___del__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e19aac7b77237ddfdde4e064a91b3fa2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e19aac7b77237ddfdde4e064a91b3fa2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e19aac7b77237ddfdde4e064a91b3fa2)) {
        Py_XDECREF(cache_frame_e19aac7b77237ddfdde4e064a91b3fa2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e19aac7b77237ddfdde4e064a91b3fa2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e19aac7b77237ddfdde4e064a91b3fa2 = MAKE_FUNCTION_FRAME(codeobj_e19aac7b77237ddfdde4e064a91b3fa2, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e19aac7b77237ddfdde4e064a91b3fa2->m_type_description == NULL);
    frame_e19aac7b77237ddfdde4e064a91b3fa2 = cache_frame_e19aac7b77237ddfdde4e064a91b3fa2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e19aac7b77237ddfdde4e064a91b3fa2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e19aac7b77237ddfdde4e064a91b3fa2) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 141;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[184]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[169]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_e19aac7b77237ddfdde4e064a91b3fa2->m_frame.f_lineno = 142;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[192], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 142;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_e19aac7b77237ddfdde4e064a91b3fa2->m_frame.f_lineno = 142;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e19aac7b77237ddfdde4e064a91b3fa2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e19aac7b77237ddfdde4e064a91b3fa2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e19aac7b77237ddfdde4e064a91b3fa2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e19aac7b77237ddfdde4e064a91b3fa2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e19aac7b77237ddfdde4e064a91b3fa2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e19aac7b77237ddfdde4e064a91b3fa2,
        type_description_1,
        par_self,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e19aac7b77237ddfdde4e064a91b3fa2 == cache_frame_e19aac7b77237ddfdde4e064a91b3fa2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e19aac7b77237ddfdde4e064a91b3fa2);
        cache_frame_e19aac7b77237ddfdde4e064a91b3fa2 = NULL;
    }

    assertFrameObject(frame_e19aac7b77237ddfdde4e064a91b3fa2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__6_encoder(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_encoder_ptr = NULL;
    PyObject *var_encoder = NULL;
    struct Nuitka_FrameObject *frame_e4bbcab7e4937e96e5dfb68cd20d6b48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e4bbcab7e4937e96e5dfb68cd20d6b48 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e4bbcab7e4937e96e5dfb68cd20d6b48)) {
        Py_XDECREF(cache_frame_e4bbcab7e4937e96e5dfb68cd20d6b48);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4bbcab7e4937e96e5dfb68cd20d6b48 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4bbcab7e4937e96e5dfb68cd20d6b48 = MAKE_FUNCTION_FRAME(codeobj_e4bbcab7e4937e96e5dfb68cd20d6b48, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e4bbcab7e4937e96e5dfb68cd20d6b48->m_type_description == NULL);
    frame_e4bbcab7e4937e96e5dfb68cd20d6b48 = cache_frame_e4bbcab7e4937e96e5dfb68cd20d6b48;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e4bbcab7e4937e96e5dfb68cd20d6b48);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e4bbcab7e4937e96e5dfb68cd20d6b48) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[184]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[170]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 146;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[125]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 146;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_e4bbcab7e4937e96e5dfb68cd20d6b48->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_encoder_ptr == NULL);
        var_encoder_ptr = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_encoder_ptr);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_encoder_ptr);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_encoder_ptr);
        tmp_expression_value_4 = var_encoder_ptr;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[187]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_encoder == NULL);
        var_encoder = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[18]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_encoder);
        tmp_assattr_target_1 = var_encoder;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(var_encoder);
        tmp_assattr_target_2 = var_encoder;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[194], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        tmp_args_element_value_3 = mod_consts[142];
        CHECK_OBJECT(var_encoder);
        tmp_args_element_value_4 = var_encoder;
        frame_e4bbcab7e4937e96e5dfb68cd20d6b48->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[198],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4bbcab7e4937e96e5dfb68cd20d6b48);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4bbcab7e4937e96e5dfb68cd20d6b48);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4bbcab7e4937e96e5dfb68cd20d6b48);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4bbcab7e4937e96e5dfb68cd20d6b48, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4bbcab7e4937e96e5dfb68cd20d6b48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4bbcab7e4937e96e5dfb68cd20d6b48, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4bbcab7e4937e96e5dfb68cd20d6b48,
        type_description_1,
        par_self,
        var_encoder_ptr,
        var_encoder,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e4bbcab7e4937e96e5dfb68cd20d6b48 == cache_frame_e4bbcab7e4937e96e5dfb68cd20d6b48) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e4bbcab7e4937e96e5dfb68cd20d6b48);
        cache_frame_e4bbcab7e4937e96e5dfb68cd20d6b48 = NULL;
    }

    assertFrameObject(frame_e4bbcab7e4937e96e5dfb68cd20d6b48);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_encoder_ptr);
    Py_DECREF(var_encoder_ptr);
    var_encoder_ptr = NULL;
    Py_XDECREF(var_encoder);
    var_encoder = NULL;
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

    Py_XDECREF(var_encoder_ptr);
    var_encoder_ptr = NULL;
    Py_XDECREF(var_encoder);
    var_encoder = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__7___del__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_229960fc1208a33c11cd4d708ebded1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_229960fc1208a33c11cd4d708ebded1a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_229960fc1208a33c11cd4d708ebded1a)) {
        Py_XDECREF(cache_frame_229960fc1208a33c11cd4d708ebded1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_229960fc1208a33c11cd4d708ebded1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_229960fc1208a33c11cd4d708ebded1a = MAKE_FUNCTION_FRAME(codeobj_229960fc1208a33c11cd4d708ebded1a, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_229960fc1208a33c11cd4d708ebded1a->m_type_description == NULL);
    frame_229960fc1208a33c11cd4d708ebded1a = cache_frame_229960fc1208a33c11cd4d708ebded1a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_229960fc1208a33c11cd4d708ebded1a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_229960fc1208a33c11cd4d708ebded1a) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[194]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 164;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[184]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[171]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_229960fc1208a33c11cd4d708ebded1a->m_frame.f_lineno = 165;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[192], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 165;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_229960fc1208a33c11cd4d708ebded1a->m_frame.f_lineno = 165;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_229960fc1208a33c11cd4d708ebded1a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_229960fc1208a33c11cd4d708ebded1a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_229960fc1208a33c11cd4d708ebded1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_229960fc1208a33c11cd4d708ebded1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_229960fc1208a33c11cd4d708ebded1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_229960fc1208a33c11cd4d708ebded1a,
        type_description_1,
        par_self,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_229960fc1208a33c11cd4d708ebded1a == cache_frame_229960fc1208a33c11cd4d708ebded1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_229960fc1208a33c11cd4d708ebded1a);
        cache_frame_229960fc1208a33c11cd4d708ebded1a = NULL;
    }

    assertFrameObject(frame_229960fc1208a33c11cd4d708ebded1a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__8_crtc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_crtc = NULL;
    struct Nuitka_FrameObject *frame_03d9739bdb31790bc9e7850142df0e96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_03d9739bdb31790bc9e7850142df0e96 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_03d9739bdb31790bc9e7850142df0e96)) {
        Py_XDECREF(cache_frame_03d9739bdb31790bc9e7850142df0e96);

#if _DEBUG_REFCOUNTS
        if (cache_frame_03d9739bdb31790bc9e7850142df0e96 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_03d9739bdb31790bc9e7850142df0e96 = MAKE_FUNCTION_FRAME(codeobj_03d9739bdb31790bc9e7850142df0e96, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_03d9739bdb31790bc9e7850142df0e96->m_type_description == NULL);
    frame_03d9739bdb31790bc9e7850142df0e96 = cache_frame_03d9739bdb31790bc9e7850142df0e96;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_03d9739bdb31790bc9e7850142df0e96);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_03d9739bdb31790bc9e7850142df0e96) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[184]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[172]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[147]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_03d9739bdb31790bc9e7850142df0e96->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[187]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_crtc == NULL);
        var_crtc = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[18]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_crtc);
        tmp_assattr_target_1 = var_crtc;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(var_crtc);
        tmp_assattr_target_2 = var_crtc;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[194], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        tmp_args_element_value_3 = mod_consts[47];
        CHECK_OBJECT(var_crtc);
        tmp_args_element_value_4 = var_crtc;
        frame_03d9739bdb31790bc9e7850142df0e96->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[198],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_03d9739bdb31790bc9e7850142df0e96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_03d9739bdb31790bc9e7850142df0e96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_03d9739bdb31790bc9e7850142df0e96);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_03d9739bdb31790bc9e7850142df0e96, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03d9739bdb31790bc9e7850142df0e96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03d9739bdb31790bc9e7850142df0e96, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_03d9739bdb31790bc9e7850142df0e96,
        type_description_1,
        par_self,
        var_crtc,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_03d9739bdb31790bc9e7850142df0e96 == cache_frame_03d9739bdb31790bc9e7850142df0e96) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_03d9739bdb31790bc9e7850142df0e96);
        cache_frame_03d9739bdb31790bc9e7850142df0e96 = NULL;
    }

    assertFrameObject(frame_03d9739bdb31790bc9e7850142df0e96);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_crtc);
    Py_DECREF(var_crtc);
    var_crtc = NULL;
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

    Py_XDECREF(var_crtc);
    var_crtc = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__9___del__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e50f7dadadd2d3851ee8ae7d80226d25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e50f7dadadd2d3851ee8ae7d80226d25 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e50f7dadadd2d3851ee8ae7d80226d25)) {
        Py_XDECREF(cache_frame_e50f7dadadd2d3851ee8ae7d80226d25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e50f7dadadd2d3851ee8ae7d80226d25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e50f7dadadd2d3851ee8ae7d80226d25 = MAKE_FUNCTION_FRAME(codeobj_e50f7dadadd2d3851ee8ae7d80226d25, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e50f7dadadd2d3851ee8ae7d80226d25->m_type_description == NULL);
    frame_e50f7dadadd2d3851ee8ae7d80226d25 = cache_frame_e50f7dadadd2d3851ee8ae7d80226d25;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e50f7dadadd2d3851ee8ae7d80226d25);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e50f7dadadd2d3851ee8ae7d80226d25) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[194]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 188;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[184]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[173]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_e50f7dadadd2d3851ee8ae7d80226d25->m_frame.f_lineno = 189;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[192], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 189;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_e50f7dadadd2d3851ee8ae7d80226d25->m_frame.f_lineno = 189;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e50f7dadadd2d3851ee8ae7d80226d25);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e50f7dadadd2d3851ee8ae7d80226d25);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e50f7dadadd2d3851ee8ae7d80226d25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e50f7dadadd2d3851ee8ae7d80226d25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e50f7dadadd2d3851ee8ae7d80226d25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e50f7dadadd2d3851ee8ae7d80226d25,
        type_description_1,
        par_self,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e50f7dadadd2d3851ee8ae7d80226d25 == cache_frame_e50f7dadadd2d3851ee8ae7d80226d25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e50f7dadadd2d3851ee8ae7d80226d25);
        cache_frame_e50f7dadadd2d3851ee8ae7d80226d25 = NULL;
    }

    assertFrameObject(frame_e50f7dadadd2d3851ee8ae7d80226d25);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__10_get_connector_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_connector = python_pars[0];
    PyObject *var_prefix = NULL;
    struct Nuitka_FrameObject *frame_a65e296f76748e52377ad0c3394db221;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a65e296f76748e52377ad0c3394db221 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a65e296f76748e52377ad0c3394db221)) {
        Py_XDECREF(cache_frame_a65e296f76748e52377ad0c3394db221);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a65e296f76748e52377ad0c3394db221 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a65e296f76748e52377ad0c3394db221 = MAKE_FUNCTION_FRAME(codeobj_a65e296f76748e52377ad0c3394db221, module_screeninfo$enumerators$drm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a65e296f76748e52377ad0c3394db221->m_type_description == NULL);
    frame_a65e296f76748e52377ad0c3394db221 = cache_frame_a65e296f76748e52377ad0c3394db221;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a65e296f76748e52377ad0c3394db221);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a65e296f76748e52377ad0c3394db221) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_22;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[91]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        tmp_dict_value_1 = mod_consts[199];
        tmp_expression_value_1 = _PyDict_NewPresized( 20 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 216;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[92]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[200];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 217;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[93]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[201];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 218;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[94]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[202];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 219;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[95]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[203];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 220;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[96]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[204];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 221;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[97]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[205];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 222;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[99]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[206];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 223;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_10 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[101]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[207];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 224;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_11 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[103]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[208];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 225;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_12 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[105]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[209];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 226;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_13 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[107]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[210];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 227;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_14 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[109]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[211];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 228;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_15 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[111]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[212];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 229;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_16 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[113]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[213];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 230;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_17 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[115]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[214];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 231;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_18 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[117]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[215];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 232;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_19 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[119]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[216];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 233;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_20 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[121]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[217];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 234;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_21 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[123]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[218];
            tmp_res = PyDict_SetItem(tmp_expression_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_expression_value_1);
        goto try_except_handler_2;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(par_connector);
        tmp_expression_value_22 = par_connector;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[126]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 235;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        assert(var_prefix == NULL);
        var_prefix = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a65e296f76748e52377ad0c3394db221, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a65e296f76748e52377ad0c3394db221, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[199];
        assert(var_prefix == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_prefix = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 213;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a65e296f76748e52377ad0c3394db221->m_frame) frame_a65e296f76748e52377ad0c3394db221->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooc";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[219]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 238;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_format_value_1 = var_prefix;
        tmp_format_spec_1 = mod_consts[220];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[221];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_connector);
            tmp_expression_value_23 = par_connector;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[127]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_1 = "ooc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[220];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_1 = "ooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[220], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a65e296f76748e52377ad0c3394db221);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a65e296f76748e52377ad0c3394db221);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a65e296f76748e52377ad0c3394db221);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a65e296f76748e52377ad0c3394db221, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a65e296f76748e52377ad0c3394db221->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a65e296f76748e52377ad0c3394db221, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a65e296f76748e52377ad0c3394db221,
        type_description_1,
        par_connector,
        var_prefix,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a65e296f76748e52377ad0c3394db221 == cache_frame_a65e296f76748e52377ad0c3394db221) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a65e296f76748e52377ad0c3394db221);
        cache_frame_a65e296f76748e52377ad0c3394db221 = NULL;
    }

    assertFrameObject(frame_a65e296f76748e52377ad0c3394db221);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_connector);
    Py_DECREF(par_connector);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_connector);
    Py_DECREF(par_connector);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c083e771e53fc4b81c611a110b28d5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$drm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__10_get_connector_name(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__10_get_connector_name,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_a65e296f76748e52377ad0c3394db221,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$drm,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1___del__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1___del__,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[42],
#endif
        codeobj_78e2289451c7fc0671042c1b60e5252d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$drm,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_crtcs(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_crtcs,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_53b89a6a8d2a1ad7b53f39b116364dd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$drm,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__3_connectors(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__3_connectors,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        codeobj_12d5c745d97149b2926377672414c39b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$drm,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__4___del__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__4___del__,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_055477107cd12df5acebebe7cdc1159c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$drm,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__5___del__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__5___del__,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_e19aac7b77237ddfdde4e064a91b3fa2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$drm,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__6_encoder(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__6_encoder,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_e4bbcab7e4937e96e5dfb68cd20d6b48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$drm,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__7___del__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__7___del__,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_229960fc1208a33c11cd4d708ebded1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$drm,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__8_crtc(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__8_crtc,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_03d9739bdb31790bc9e7850142df0e96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$drm,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__9___del__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__9___del__,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_e50f7dadadd2d3851ee8ae7d80226d25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$drm,
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

function_impl_code functable_screeninfo$enumerators$drm[] = {
    impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1___del__,
    impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__2_crtcs,
    impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__3_connectors,
    impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__4___del__,
    impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__5___del__,
    impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__6_encoder,
    impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__7___del__,
    impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__8_crtc,
    impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__9___del__,
    impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__10_get_connector_name,
    impl_screeninfo$enumerators$drm$$$function__1_enumerate_monitors,
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

    function_impl_code *current = functable_screeninfo$enumerators$drm;
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

    if (offset > sizeof(functable_screeninfo$enumerators$drm) || offset < 0) {
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
        functable_screeninfo$enumerators$drm[offset],
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
        module_screeninfo$enumerators$drm,
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
PyObject *modulecode_screeninfo$enumerators$drm(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("screeninfo.enumerators.drm");

    // Store the module for future use.
    module_screeninfo$enumerators$drm = module;

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
        PRINT_STRING("screeninfo.enumerators.drm: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("screeninfo.enumerators.drm: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("screeninfo.enumerators.drm: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscreeninfo$enumerators$drm\n");

    moduledict_screeninfo$enumerators$drm = MODULE_DICT(module_screeninfo$enumerators$drm);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_screeninfo$enumerators$drm,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_screeninfo$enumerators$drm,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[220]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_screeninfo$enumerators$drm,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_screeninfo$enumerators$drm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_screeninfo$enumerators$drm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_screeninfo$enumerators$drm);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_screeninfo$enumerators$drm);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_3df3a5864c73dafd848450b2c260d7ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_3df3a5864c73dafd848450b2c260d7ef = MAKE_MODULE_FRAME(codeobj_3df3a5864c73dafd848450b2c260d7ef, module_screeninfo$enumerators$drm);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_3df3a5864c73dafd848450b2c260d7ef);
    assert(Py_REFCNT(frame_3df3a5864c73dafd848450b2c260d7ef) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[225], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[226], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[228];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_screeninfo$enumerators$drm;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[229];
        tmp_level_value_1 = mod_consts[1];
        frame_3df3a5864c73dafd848450b2c260d7ef->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_screeninfo$enumerators$drm,
                mod_consts[188],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[188]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_screeninfo$enumerators$drm,
                mod_consts[185],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[185]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_8);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_1 = mod_consts[44];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[230]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_subscript_value_1 == NULL)) {
            tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
        }

        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_9 = MAKE_FUNCTION_screeninfo$enumerators$drm$$$function__1_enumerate_monitors(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_9);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3df3a5864c73dafd848450b2c260d7ef);
#endif
    popFrameStack();

    assertFrameObject(frame_3df3a5864c73dafd848450b2c260d7ef);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3df3a5864c73dafd848450b2c260d7ef);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3df3a5864c73dafd848450b2c260d7ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3df3a5864c73dafd848450b2c260d7ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3df3a5864c73dafd848450b2c260d7ef, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("screeninfo.enumerators.drm", false);

    Py_INCREF(module_screeninfo$enumerators$drm);
    return module_screeninfo$enumerators$drm;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$drm, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("screeninfo$enumerators$drm", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}