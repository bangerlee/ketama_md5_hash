/**
 * $Id: ketamamodule.c 22 2007-07-13 01:31:27Z toxik $
 *
 * ketama Python module.
 *
 * Definitions of C-level API calls to libketama
 */

#include "ketamamodule.h"

PY_DEF(pyketama_hashi, self, args) {
    char *data;
    PyObject *r = NULL;

    if (PyArg_ParseTuple(args, "s", &data)) {
        r = Py_BuildValue("I", ketama_hashi(data));
    }
}

PyMODINIT_FUNC initketama(void) {
    PyObject *m;
/*
    if (PyType_Ready(&pyketama_ContinuumType) < 0) {
        return;
    }
*/
    if (!(m = Py_InitModule3("ketama", ketamaMethods,
        "Python extension for calling libketama functions."))) {
        return;
    }

  //  pyketama_error = PyErr_NewException("ketama.KetamaError", NULL, NULL);

//    Py_INCREF(pyketama_error);
 //   PyModule_AddObject(m, "KetamaError", pyketama_error);
/*
    Py_INCREF(&pyketama_ContinuumType);
    PyModule_AddObject(m, "Continuum", (PyObject *)&pyketama_ContinuumType);
*/
}
