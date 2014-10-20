using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using TechTalk.SpecFlow;

namespace Acceptance.StepDefinitions
{
    [Binding]
    public class StepDefinitions
    {
        [Given(@"I am driving a car with a transmission of type:")]
        public void GivenIAmDrivingACarWithATransmissionOfType(Table table)
        {
            ScenarioContext.Current.Pending();
        }

        [Given(@"I have an engine of size:")]
        public void GivenIHaveAnEngineOfSize(Table table)
        {
            ScenarioContext.Current.Pending();
        }

        [When(@"I press put on these tires:")]
        public void WhenIPressPutOnTheseTires(Table table)
        {
            ScenarioContext.Current.Pending();
        }

        [Then(@"the max speed should be 100, the grip should be 99, and mileage should be less than 18")]
        public void ThenTheMaxSpeedShouldBe100TheGripShouldBe99AndMileageShouldBeLessThan18()
        {
            ScenarioContext.Current.Pending();
        }
    }

}
