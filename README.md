# Interval
Arduino knihovna pro časování pomocí intervalů
Koncepce programové konstrukce aplikace pro Arduino spočívá ve dvou hlavních metodách – **setup()** a **loop()**, ve které program neustále běží.
Pro pohodlnější práci s obsluhou periodických procesů jsem napsal jednoduchou knihovnu, která tyto úkoly umožňuje napsat velmi elegantním způsobem.
Knihovna **Interval** vytváří časovací objekty a zpřístupňuje dvě metody – metodu **set** a metodu **expired**.
Metoda **set** se používá k nastavení timeoutu a definici začátku časování, metoda **expired** pak slouží k ověření, zda nastavený interval již vypršel.
Zajímavostí je, že knihovna korektně ošetřuje přetečení vnitřního milisekundového čítače, takže nehrozí nebezpečí špatného časování i při velmi dlouhé době chodu zařízení.
