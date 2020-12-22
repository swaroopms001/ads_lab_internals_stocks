#ifndef STOCKS_H_INCLUDED
#define STOCKS_H_INCLUDED
#include "appconst.h"

typedef _trading_queue_ TradingQue;

struct _trading_queue_ {
    char name_of_stock[30]
    char date[15]
    int32_t price_of_stock
    int32_t quantity_of_stocks;
};

struct _queue_ {
    uint32_t size;
    uint32_t count;
    uint32_t rear;
    uint32_t front;
    TradingQue share[Q_len];
};

typedef struct _queue_ Queue;

struct _queue_result_ QueueResult;
    uint32_t size;
    uint32_t count;
    uint32_t rear;
    uint32_t front;
    TradingQue share[Q_len];

typedef struct _queue_result_ QueueResult;
TradingQue share[Q_len];
    uint32_t status;

Queue queue_new(uint32_t size);
uint8_t queue_full(Queue *q);
uint8_t queue_empty(Queue *q);
Queue* queue_add(Queue *q, TradingQue share, QueueResult *res);
Queue* queue_delete(Queue *q, QueueResult *res);
Queue* look_up(Queue *q, TradingQue share);
Queue* topup(Queue *q, TradingQue share,int32_t quantity
uint32_t queue_length(Queue *q);
             );

#endif // STOCKS_H_INCLUDED
