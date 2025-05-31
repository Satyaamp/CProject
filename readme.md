## ✅ 1. **Student Management System**

````markdown
# 🎓 Student Management System in C

A basic C project that manages student records using file handling. It allows users to add, display, and search students through a simple console interface.

---

## 🚀 Features

- Add student with roll number, name, and marks
- Display all student records
- Search student by roll number
- Data stored in a binary file (`students.dat`)

---

## 🛠 Technologies

- Language: C
- File Handling: `fopen`, `fwrite`, `fread`
- Compilation: GCC
- IDE: Visual Studio Code (VS Code)

---

## ⚙️ How to Compile and Run

```bash
gcc student_manager.c -o student_manager
./student_manager
````

---

## 📦 Sample Output

```bash
1. Add Student
2. Display All
3. Search Student
4. Exit
Choice: 1
Enter Roll No: 101
Enter Name: Satyam Kumar
Enter Marks: 78.5
Student added successfully!

1. Add Student
2. Display All
3. Search Student
4. Exit
Choice: 2

--- Student Records ---
Roll: 101 | Name: Satyam Kumar | Marks: 78.50

1. Add Student
2. Display All
3. Search Student
4. Exit
Choice: 3
Enter roll number to search: 101
Found: Satyam Kumar, Marks: 78.50

1. Add Student
2. Display All
3. Search Student
4. Exit
Choice: 4
```

---

## 📁 File Structure

```
student_manager/
├── student_manager.c
└── README.md
```

---

## 👤 Author

* **Name:** Satyam Kumar
* **GitHub:** [Satyaamp](https://github.com/Satyaamp)

---

## ✅ 2. **Library Book Management System**

```markdown
# 📚 Library Book Management System in C

This project provides a simple CLI-based interface to manage library books. It stores book details such as ID, title, and author using binary file operations.

---

## 🚀 Features

- Add new books
- List all books in the library
- Search a book by title
- File-based storage in `library.dat`

---

## 🛠 Technologies

- Language: C
- File Handling: `fopen`, `fwrite`, `fread`
- Compilation: GCC
- IDE: Visual Studio Code (VS Code)

---

## ⚙️ How to Compile and Run

```bash
gcc library_manager.c -o library_manager
./library_manager
````

---

## 📦 Sample Output

```bash
1. Add Book
2. List Books
3. Search Book
4. Exit
Choice: 1
Enter Book ID: 1001
Enter Title: Clean Code
Enter Author: Robert C. Martin
Book added successfully!

1. Add Book
2. List Books
3. Search Book
4. Exit
Choice: 2

--- Book List ---
ID: 1001 | Title: Clean Code | Author: Robert C. Martin

1. Add Book
2. List Books
3. Search Book
4. Exit
Choice: 3
Enter title to search: Clean Code
Found: Clean Code by Robert C. Martin

1. Add Book
2. List Books
3. Search Book
4. Exit
Choice: 4
```

---

## 📁 File Structure

```
library_manager/
├── library_manager.c
└── README.md
```

---

## 👤 Author

* **Name:** Satyam Kumar
* **GitHub:** [Satyaamp](https://github.com/Satyaamp)

---