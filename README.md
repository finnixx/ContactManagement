# Contact Management System

## Overview

This simple console-based Contact Management System allows users to manage their contacts by adding new contacts, searching for existing contacts, and accessing help documentation. Contacts are stored in a file named `number.txt`. The program validates the phone number to ensure it is 10 digits and contains only numeric characters.

## Features

1. **Add Contact**: Allows the user to input first name, last name, and a 10-digit phone number to add a new contact.

2. **Search Contact**: Enables users to search for a contact by entering the first name or last name.

3. **Help**: Displays a basic help message providing information about the system.

4. **Exit**: Exits the program.

## How to Use

1. **Add Contact**
   - Choose option 1 from the main menu.
   - Enter the first name, last name, and 10-digit phone number as prompted.
   - Contacts are saved in the `number.txt` file.

2. **Search Contact**
   - Choose option 2 from the main menu.
   - Enter the first name or last name of the contact to search.
   - Displayed information includes the first name, last name, and phone number.

3. **Help**
   - Choose option 3 from the main menu.
   - Displays a brief help message about the functionality of the program.

4. **Exit**
   - Choose option 4 from the main menu.
   - Exits the program.

## File Management

- Contacts are stored in a file named `number.txt`.
- The file is created or opened in append mode for adding new contacts.

## Important Notes

- The phone number must be exactly 10 digits and contain only numeric characters.
- Invalid inputs are handled with appropriate error messages.

## Compilation and Execution

Compile the code using a C++ compiler and execute the compiled binary.

```bash
g++ contact_management.cpp -o contact_management
./contact_management
```

## Contributing

If you encounter any issues or have suggestions for improvements, feel free to open an issue or create a pull request.

## License

This Contact Management System is released under the [MIT License](LICENSE).
