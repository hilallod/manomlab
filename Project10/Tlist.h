#pragma once
#include <iostream>

using namespace std;

template <class T>

class TLink
{
public:
	T val;
	TLink *pNext;
};

template <class T>
class THeadList
{
protected:
	TLink<T> *pHead, *pFirst, *pPrev, *pCurr, *pLast;
	int pos, size;
public:

	TPolinom()
	{
		TManom m;
		m.coef = 0;
		m.powZ = -1;
		pHead->val = m;
	}
	TPolinom(const Tpolinom &p)
	{
		pHead->val = p.pHead->val;
		for (p.Reset()!p.IsEnd(), p.GoNext())
			InsLast(p.pCurr->val);
	}
	void operator +=(const TPolinom &q)
	{
		TManom pM, qM, r;
		Reset();
		q.Reset();
		While(1)
		{
			pM = pCurr->val;
			qM = q.pCurr->val;
			if (pM > qM)
				GoNext();
			else
			{
				if (qM > pM)
				{
					InsCurr(qM);
					q.GoNext();
				}
				else
				{
					if (pM.powZ == -1)
						break;
					else
						r = pM.coeff + qM.coeff;
					if (r == 0)
					{
						DelCurr();
						q.GoNext;
					}
					else
					{
						pCurr->val.coeff = r;
						q.GoNext();
						GoNext();
					}
				}

			}
		}
	}
	THeadList()
	{
		TLink<T>*tmp = new TLink<T>;
		pHead = tmp;
		pHead->pNext = pHead;
		pFirst = pCurr = pLast = pPrev = NULL;
		pos = -1;
		size = 0;
	}


	void InsFirst(const T elem)
	{
		TLink<T>*tmp = new TLink<T>;
		tmp->val = elem;
		if (size > 0)
		{
			pHead->pNext = tmp;
			tmp->pNext = pFirst;
			pFirst = tmp;
			size++; pos++;
		}
		else
		{
			pHead->pNext = tmp;
			tmp->pNext = pHead;
			pFirst = tmp;
			size++; pos = 0;
			pCurr = pFirst;
		}
	}

	void InsCurr(const T elem)
	{
		TLink<T>*tmp = new TLink<T>;
		tmp->val = elem;
		pPrev->pNext = tmp;
		tmp->pNext = pCurr;
		pCurr = tmp;
		size++;
	}

	void DelCurr()
	{
		if (pCurr != pHead && size > 0)
		{
			TLink<T>*tmp = pCurr;
			pPrev->pNext = pCurr->pNext;
			delete tmp;
			pCurr = pPrev->pNext;
			size--;
		}
	}

	void Reset()
	{
		pCurr = pFirst;
		pPrev = pHead;
		pos = 0;
	}

	void GoNext()
	{
		pPrev = pCurr;
		pCurr = pCurr->pNext;
		pos++;
	}

	bool IsEnd()
	{
		return pCurr == pHead;
	}


};