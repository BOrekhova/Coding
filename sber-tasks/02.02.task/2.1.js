let values = ["Строка", true, "Число", "Объект", "Не число", false];

for (let i = 0; i < values.length; i++) {
    if (typeof values[i] === "boolean") {
        values[i] = "Булевый тип";
        break;
    }
}
console.log(values)