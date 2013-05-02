
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef PART_PARTFEATUREPY_H
#define PART_PARTFEATUREPY_H

#include <App/DocumentObjectPy.h>
#include <Mod/Part/App/PartFeature.h>
#include <string>

namespace Part
{

//===========================================================================
// PartFeaturePy - Python wrapper
//===========================================================================

/** The python export class for Feature
 */
class PartExport PartFeaturePy : public App::DocumentObjectPy
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    static PyParentObject Parents[];
    virtual PyTypeObject *GetType(void) {return &Type;};
    virtual PyParentObject *GetParents(void) {return Parents;}

public:
    PartFeaturePy(Feature *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~PartFeaturePy();

    typedef Feature* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Feature *getFeaturePtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

#define PARENTSPartPartFeaturePy &PartFeaturePy::Type,PARENTSAppDocumentObjectPy

}  //namespace Part

#endif  // PART_PARTFEATUREPY_H

