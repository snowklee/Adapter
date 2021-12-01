#include "duck.h"
#include "mallardduck.h"
#include "turkeyadapter.h"
#include "wildturkey.h"

int main() {
	MallardDuck *duck = new MallardDuck();
    WildTurkey *turkey = new WildTurkey();
    Duck *turkeyAdapter = new TurkeyAdapter(turkey);
    cout << "Turkey" << endl;
    turkey->gobble();
    turkey->fly();
    cout << endl << "Duck" << endl;
    duck->quack();
    duck->fly();
    cout << endl << "TurkeyAdapter" << endl;
    turkeyAdapter->quack();
    turkeyAdapter->fly();
    
	return 0;
}
