#ifndef H_RPMTE_PY
#define H_RPMTE_PY

#include <rpm/rpmte.h>

typedef struct rpmteObject_s rpmteObject;

extern PyTypeObject rpmte_Type;

PyObject * rpmte_Wrap(rpmte te);

#endif
