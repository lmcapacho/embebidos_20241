class Menu:
    def __init__(self):
        self.items = []
        self.index = 0
        self.max_items = 10
        self.num_items = 0

    def enter(self):
        action = self.items[self.index]['action']
        if action is not None:  
            action() 

    def up(self):
        if self.index < (self.num_items - 1):
            self.index += 1
            print(self.items[self.index]['text'])

    def down(self):
        if self.index > 0:
            self.index -= 1
            print(self.items[self.index]['text'])

    def addItem(self, text, action):
        if self.num_items < (self.max_items - 1):
            self.items.append({'text':text, 
                        'action':action})
            self.num_items += 1

    def printMenu(self):
        for item in self.items:
            print(item['text'])