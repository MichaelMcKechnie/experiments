using FluentAssertions;
using NUnit.Framework;

namespace CSharpExperiments
{
    class A
    {
        public virtual string virtualName()
        {
            return "A";
        }
        public string realName()
        {
            return "A";
        }
    }

    class B : A
    {
        public override string virtualName()
        {
            return "B";
        }

        public new string realName()
        {
            return "B";
        }
    }

    [TestFixture]
    class CSharpTests
    {
        [Test]
        public void TestLiskov()
        {
            //Arrange
            A MyA = new A();
            B MyB = new B();

            //Act
            A AHoldingB = MyB;

            //Assert
            MyA.virtualName().Should().Be("A");
            MyB.virtualName().Should().Be("B");
            AHoldingB.virtualName().Should().Be("B");

            MyA.realName().Should().Be("A");
            MyB.realName().Should().Be("B");
            AHoldingB.realName().Should().Be("A");
        }
    }

}
