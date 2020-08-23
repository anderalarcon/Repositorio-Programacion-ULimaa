from W import Hijo
class Nieto(Hijo):
    def __init__(self,nombre,edad,peso):
        super().__init__(nombre,edad)
        self.peso=peso
    def imprimir3(self):
        Hijo.imprimir2(self)
        print(self.peso)
 