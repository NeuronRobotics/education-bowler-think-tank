
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef POINTS_POINTSPY_H
#define POINTS_POINTSPY_H

#include <App/ComplexGeoDataPy.h>
#include <Mod/Points/App/Points.h>
#include <string>

namespace Points
{

//===========================================================================
// PointsPy - Python wrapper
//===========================================================================

/** The python export class for PointKernel
 */
class PointsExport PointsPy : public Data::ComplexGeoDataPy
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    static PyParentObject Parents[];
    virtual PyTypeObject *GetType(void) {return &Type;};
    virtual PyParentObject *GetParents(void) {return Parents;}

public:
    PointsPy(PointKernel *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~PointsPy();

    typedef PointKernel* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the copy() method
    static PyObject * staticCallback_copy (PyObject *self, PyObject *args);
    /// implementer for the copy() method
    PyObject*  copy(PyObject *args);
    /// callback for the read() method
    static PyObject * staticCallback_read (PyObject *self, PyObject *args);
    /// implementer for the read() method
    PyObject*  read(PyObject *args);
    /// callback for the write() method
    static PyObject * staticCallback_write (PyObject *self, PyObject *args);
    /// implementer for the write() method
    PyObject*  write(PyObject *args);
    /// callback for the writeInventor() method
    static PyObject * staticCallback_writeInventor (PyObject *self, PyObject *args);
    /// implementer for the writeInventor() method
    PyObject*  writeInventor(PyObject *args);
    /// callback for the addPoints() method
    static PyObject * staticCallback_addPoints (PyObject *self, PyObject *args);
    /// implementer for the addPoints() method
    PyObject*  addPoints(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the CountPoints attribute
    static PyObject * staticCallback_getCountPoints (PyObject *self, void *closure);
    /// getter for the CountPoints attribute
    Py::Int getCountPoints(void) const;
    /// setter callback for the CountPoints attribute
    static int staticCallback_setCountPoints (PyObject *self, PyObject *value, void *closure);
    // no setter method,  CountPoints is read only!
    ///getter callback for the Points attribute
    static PyObject * staticCallback_getPoints (PyObject *self, void *closure);
    /// getter for the Points attribute
    Py::List getPoints(void) const;
    /// setter callback for the Points attribute
    static int staticCallback_setPoints (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Points is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    PointKernel *getPointKernelPtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

		
    //@}
};

#define PARENTSPointsPointsPy &PointsPy::Type,PARENTSDataComplexGeoDataPy

}  //namespace Points

#endif  // POINTS_POINTSPY_H


