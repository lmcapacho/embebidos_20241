from menu import Menu

def option0():
    print('Option_0')

def option1():
    print('Option_1')
    
def option2():
    print('Option_2')

menu = Menu()

menu.addItem("Option 0", option0)
menu.addItem("Option 1", option1)
menu.addItem("Option 2", None)

menu.up()
menu.enter()
menu.up()
menu.enter()
menu.down()

menu.printMenu()