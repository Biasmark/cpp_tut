//Pointers can points to objects of custom classess

    std :: vector <int> vector_int ;
    std :: vector <int >* vec_ptr = & vector_int ;

    MyClass obj;
    MyClass* obj_ptr = &obj;

//Call object functions from pointer with ' -> ' 

    MyClass obj;
    obj.MyFunc ();

    MyClass* obj_ptr = &obj;
    obj_ptr ->MyFunc ();


// Every object of a class or a struct holds a pointer to itself 
// This pointer is called ' this ' 


//Pointers can point to a const variable 
// cannot change the value, but can reassign pointer 
const MyType* const_var_ptr = &var;
const_var_ptr = &var_other;

//Pointers can be const 
// cannot reassign pointer, but can change the value.
// Rarely use this type of practice .. 
MyType* const var_const_ptr = &var;
var_const_ptr->a=10;

//finally, Pointers can do both at the same time -> read only 
const MyType* const const_var_const_ptr = &var;



