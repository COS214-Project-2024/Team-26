<<<<<<< Updated upstream
#ifndef NEXTCOMMAND_H
#define NEXTCOMMAND_H

#include "CityCommand.h"
class NextCommand : public CityCommand {


public:
	NextCommand(CityMediator* mediator);
	void execute();
};

#endif
=======
#ifndef NEXTCOMMAND_H
#define NEXTCOMMAND_H

#include "CityCommand.h"
class NextCommand : CityCommand {


public:
	NextCommand(CityMediator* mediator);
	void execute();
};

#endif
>>>>>>> Stashed changes
