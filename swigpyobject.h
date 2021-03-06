#include <Python.h>
#include "royale/DepthData.hpp"

// From https://stackoverflow.com/a/29343772
typedef struct {
  PyObject_HEAD
  void *ptr; // This is the pointer to the actual C++ instance
  void *ty;  // swig_type_info originally, but shouldn't matter
  int own;
  PyObject *next;
} SwigPyObject;
