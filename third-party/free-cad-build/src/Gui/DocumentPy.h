
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef GUI_DOCUMENTPY_H
#define GUI_DOCUMENTPY_H

#include <Base/PersistencePy.h>
#include <Gui/Document.h>
#include <string>

namespace Gui
{

//===========================================================================
// DocumentPy - Python wrapper
//===========================================================================

/** The python export class for Document
 */
class GuiExport DocumentPy : public Base::PersistencePy
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    static PyParentObject Parents[];
    virtual PyTypeObject *GetType(void) {return &Type;};
    virtual PyParentObject *GetParents(void) {return Parents;}

public:
    DocumentPy(Document *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~DocumentPy();

    typedef Document* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the show() method
    static PyObject * staticCallback_show (PyObject *self, PyObject *args);
    /// implementer for the show() method
    PyObject*  show(PyObject *args);
    /// callback for the hide() method
    static PyObject * staticCallback_hide (PyObject *self, PyObject *args);
    /// implementer for the hide() method
    PyObject*  hide(PyObject *args);
    /// callback for the setPos() method
    static PyObject * staticCallback_setPos (PyObject *self, PyObject *args);
    /// implementer for the setPos() method
    PyObject*  setPos(PyObject *args);
    /// callback for the setEdit() method
    static PyObject * staticCallback_setEdit (PyObject *self, PyObject *args);
    /// implementer for the setEdit() method
    PyObject*  setEdit(PyObject *args);
    /// callback for the resetEdit() method
    static PyObject * staticCallback_resetEdit (PyObject *self, PyObject *args);
    /// implementer for the resetEdit() method
    PyObject*  resetEdit(PyObject *args);
    /// callback for the addAnnotation() method
    static PyObject * staticCallback_addAnnotation (PyObject *self, PyObject *args);
    /// implementer for the addAnnotation() method
    PyObject*  addAnnotation(PyObject *args);
    /// callback for the update() method
    static PyObject * staticCallback_update (PyObject *self, PyObject *args);
    /// implementer for the update() method
    PyObject*  update(PyObject *args);
    /// callback for the getObject() method
    static PyObject * staticCallback_getObject (PyObject *self, PyObject *args);
    /// implementer for the getObject() method
    PyObject*  getObject(PyObject *args);
    /// callback for the activeObject() method
    static PyObject * staticCallback_activeObject (PyObject *self, PyObject *args);
    /// implementer for the activeObject() method
    PyObject*  activeObject(PyObject *args);
    /// callback for the activeView() method
    static PyObject * staticCallback_activeView (PyObject *self, PyObject *args);
    /// implementer for the activeView() method
    PyObject*  activeView(PyObject *args);
    /// callback for the mdiViewsOfType() method
    static PyObject * staticCallback_mdiViewsOfType (PyObject *self, PyObject *args);
    /// implementer for the mdiViewsOfType() method
    PyObject*  mdiViewsOfType(PyObject *args);
    /// callback for the sendMsgToViews() method
    static PyObject * staticCallback_sendMsgToViews (PyObject *self, PyObject *args);
    /// implementer for the sendMsgToViews() method
    PyObject*  sendMsgToViews(PyObject *args);
    /// callback for the mergeProject() method
    static PyObject * staticCallback_mergeProject (PyObject *self, PyObject *args);
    /// implementer for the mergeProject() method
    PyObject*  mergeProject(PyObject *args);
    /// callback for the toggleTreeItem() method
    static PyObject * staticCallback_toggleTreeItem (PyObject *self, PyObject *args);
    /// implementer for the toggleTreeItem() method
    PyObject*  toggleTreeItem(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the ActiveObject attribute
    static PyObject * staticCallback_getActiveObject (PyObject *self, void *closure);
    /// getter for the ActiveObject attribute
    Py::Object getActiveObject(void) const;
    /// setter callback for the ActiveObject attribute
    static int staticCallback_setActiveObject (PyObject *self, PyObject *value, void *closure);
    /// setter for the ActiveObject attribute
    void setActiveObject(Py::Object arg);
    ///getter callback for the ActiveView attribute
    static PyObject * staticCallback_getActiveView (PyObject *self, void *closure);
    /// getter for the ActiveView attribute
    Py::Object getActiveView(void) const;
    /// setter callback for the ActiveView attribute
    static int staticCallback_setActiveView (PyObject *self, PyObject *value, void *closure);
    /// setter for the ActiveView attribute
    void setActiveView(Py::Object arg);
    ///getter callback for the Document attribute
    static PyObject * staticCallback_getDocument (PyObject *self, void *closure);
    /// getter for the Document attribute
    Py::Object getDocument(void) const;
    /// setter callback for the Document attribute
    static int staticCallback_setDocument (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Document is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Document *getDocumentPtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

#define PARENTSGuiDocumentPy &DocumentPy::Type,PARENTSBasePersistencePy

}  //namespace Gui

#endif  // GUI_DOCUMENTPY_H


