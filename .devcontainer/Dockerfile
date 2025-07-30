# Gunakan base image Windows Server Core
FROM mcr.microsoft.com/windows/servercore:ltsc2022

# Tetapkan direktori kerja
WORKDIR C:/

# Install arduino-cli untuk Windows menggunakan PowerShell
RUN powershell -Command \
    Invoke-WebRequest -Uri https://downloads.arduino.cc/arduino-cli/arduino-cli_latest_Windows_64bit.zip -OutFile arduino-cli.zip; \
    Expand-Archive -Path arduino-cli.zip -DestinationPath C:\arduino-cli; \
    Remove-Item arduino-cli.zip

# Tambahkan direktori arduino-cli ke dalam System PATH
# agar 'arduino-cli.exe' bisa dipanggil dari mana saja
RUN setx /M PATH "%PATH%;C:\arduino-cli"

# Konfigurasi arduino-cli dengan menginstal core AVR
# Perintahnya sama, hanya perlu menambahkan .exe
RUN arduino-cli.exe core update-index && arduino-cli.exe core install arduino:avr