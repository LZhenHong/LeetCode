char *defangIPaddr(char *address) {
    int addressLength = strlen(address);
    char *defangIPAddress = (char *)malloc(sizeof(char) * (addressLength + 7));
    int defangIndex = 0;
    for (int i = 0; i < addressLength; ++i) {
        if (address[i] == '.') {
            defangIPAddress[defangIndex++] = '[';
            defangIPAddress[defangIndex++] = address[i];
            defangIPAddress[defangIndex++] = ']';
        } else {
            defangIPAddress[defangIndex++] = address[i];
        }
    }
    defangIPAddress[addressLength + 6] = '\0';
    return defangIPAddress;
}
