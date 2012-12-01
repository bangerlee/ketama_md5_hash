/**
 * $Id: ketamamodule.h 23 2007-07-13 01:32:00Z toxik $
 *
 * License: See ../LICENSE or
 *  svn://svn.audioscrobbler.net/misc/ketama/LICENSE
 */

#ifndef _PYKETAMA_H
#define _PYKETAMA_H

#include <Python.h>
#include <ketama.h>

/* Common idiom goes to macro, that's it. */
#define PY_DEF(name, self, args) static PyObject *(name)( \
    PyObject *(self), PyObject *(args))
#define PY_KDEF(name, self, args, kwds) static PyObject *(name)( \
    PyObject *(self), PyObject *(args) PyObject *(kwds))
PY_DEF(pyketama_hashi, self, args);

static PyMethodDef ketamaMethods[] = {
    {"hashi", pyketama_hashi, METH_VARARGS, "Calculates hash from input key"},
    {NULL}
};

PyMODINIT_FUNC initketama(void);

#endif

