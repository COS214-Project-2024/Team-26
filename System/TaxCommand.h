

#ifndef TAXCOMMAND_H
#define TAXCOMMAND_H

#include "CityCommand.h"
#include "TurnMediator.h"

/**
 * @class TaxCommand
 * @brief A command to change taxes in the city.
 *
 * The TaxCommand class is responsible for executing tax related operations in the city.
 */
class TaxCommand : public CityCommand {
private:
    /// Pointer to the mediator responsible for coordinating tax operations.
    TurnMediator* mediator;

public:
    /// The tax amount to be levied.
    int tax;

    /**
     * @brief Constructs a TaxCommand object.
     * @param tax The amount of tax to be levied.
     * @param mediator Pointer to a TurnMediator to facilitate the command.
     *        Defaults to a new instance of TurnMediator.
     */
    TaxCommand(double tax, TurnMediator* mediator = new TurnMediator());

    /**
     * @brief Executes the tax command.
     *
     * This function interacts with the mediator to apply the specified tax amount.
     */
    void execute();
};

#endif 




