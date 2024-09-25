#ifndef TEST_H
#define TEST_H


class Test
{
    public:
        Test();
        virtual ~Test();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // TEST_H
