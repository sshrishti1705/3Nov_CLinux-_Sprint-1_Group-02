CC = gcc
INC = ./include
SRC = src
OBJ = obj
BIN = ./bin

CFLAGS = -c -g -Wall

LDFLAGS = -o
IFLAGS = -I $(INC)


all: Mycalendar

Mycalendar: $(OBJ)/main.o $(OBJ)/login.o $(OBJ)/scheduleMeeting.o $(OBJ)/displayMeeting.o $(OBJ)/displayCalendar.o $(OBJ)/sendNotification.o $(OBJ)/sendReply.o $(OBJ)/cancelMeeting.o  $(OBJ)/common.o  
	$(CC) $(LDFLAGS) $(BIN)/Mycalendar $(OBJ)/main.o $(OBJ)/login.o $(OBJ)/scheduleMeeting.o $(OBJ)/displayMeeting.o $(OBJ)/displayCalendar.o $(OBJ)/sendNotification.o $(OBJ)/sendReply.o $(OBJ)/cancelMeeting.o  $(OBJ)/common.o

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c $(IFLAGS)
	mv main.o $(OBJ)/

$(OBJ)/common.o: $(SRC)/common.c
	$(CC) $(CFLAGS) $(SRC)/common.c $(IFLAGS)
	mv common.o $(OBJ)/

$(OBJ)/login.o: $(SRC)/login.c
	$(CC) $(CFLAGS) $(SRC)/login.c $(IFLAGS)
	mv login.o $(OBJ)/

$(OBJ)/scheduleMeeting.o: $(SRC)/scheduleMeeting.c
	$(CC) $(CFLAGS) $(SRC)/scheduleMeeting.c $(IFLAGS)
	mv scheduleMeeting.o $(OBJ)/

$(OBJ)/displayMeeting.o: $(SRC)/displayMeeting.c
	$(CC) $(CFLAGS) $(SRC)/displayMeeting.c $(IFLAGS)
	mv displayMeeting.o $(OBJ)/

$(OBJ)/displayCalendar.o: $(SRC)/displayCalendar.c
	$(CC) $(CFLAGS) $(SRC)/displayCalendar.c $(IFLAGS)
	mv displayCalendar.o $(OBJ)/

$(OBJ)/sendNotification.o: $(SRC)/sendNotification.c 
	$(CC) $(CFLAGS) $(SRC)/sendNotification.c $(IFLAGS) 
	mv sendNotification.o $(OBJ)/


$(OBJ)/sendReply.o: $(SRC)/sendReply.c
	$(CC) $(CFLAGS) $(SRC)/sendReply.c $(IFLAGS)
	mv sendReply.o $(OBJ)/

$(OBJ)/cancelMeeting.o: $(SRC)/cancelMeeting.c
	$(CC) $(CFLAGS) $(SRC)/cancelMeeting.c $(IFLAGS)
	mv cancelMeeting.o $(OBJ)/
	

clean:
	rm -f *.out *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/*
	@echo "Cleaning Done!" 
