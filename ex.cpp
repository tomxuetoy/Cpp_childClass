In many cases, derived classes are used like this:
 
CParent* parent = NULL;
Switch (childtype)
{
  Case CHILDTYPE1:
		parent = new Child;
		break;
	Case CHILDTYPE2:
		parent = new Child2; //assuming Child2 is defined as class Child2 : public Parent
		break;
	default:
		throughException();
}
 
Parent->doSomething();
Delete parent;
 
 
If in the future, you need another child, all you need to do is to derive another child class, 
and add another case in the “switch” block.

