#include <iostream>
#include <libnet.h>
#include <linux/netfilter.h>
#include <libnetfilter_queue/libnetfilter_queue.h>

typedef struct nfq_q_handle nfq_q_handle;
typedef struct nfgenmsg nfgenmsg;
typedef struct nfq_data nfq_data;
typedef struct nfq_handle nfq_handle;
typedef struct nfq_q_handle nfq_q_handle;
typedef struct nfqnl_msg_packet_hdr nfqnl_msg_packet_hdr;

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
