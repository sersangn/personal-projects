#Pokedex python program

print("Hello welcome to the Pokedex")

name = input("Enter Pokemon Name:")
print("Pokemon is: " + name)
pokemons=[]

with open("pokedex.txt", 'r') as file:
    for line in file:
        pokemons.append(line.split(","))   
    
pokedex = {}
for line in pokemons:
    pokedex[line[1]] = line

try:
    print(pokedex[name])
except:
    print("Pokemon not available")
