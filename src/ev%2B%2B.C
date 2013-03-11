#include "ev++.h"

namespace ev {
  extern "C" {
    void cb_io       (struct ev_io       *w, int revents) { (*static_cast<io       *>(w))(revents); }
    void cb_timer    (struct ev_timer    *w, int revents) { (*static_cast<timer    *>(w))(revents); }
    #if EV_PERIODICS
    void cb_periodic (struct ev_periodic *w, int revents) { (*static_cast<periodic *>(w))(revents); }
    #endif
    void cb_idle     (struct ev_idle     *w, int revents) { (*static_cast<idle     *>(w))(revents); }
    void cb_prepare  (struct ev_prepare  *w, int revents) { (*static_cast<prepare  *>(w))(revents); }
    void cb_check    (struct ev_check    *w, int revents) { (*static_cast<check    *>(w))(revents); }
    void cb_sig      (struct ev_signal   *w, int revents) { (*static_cast<sig      *>(w))(revents); }
    void cb_child    (struct ev_child    *w, int revents) { (*static_cast<child    *>(w))(revents); }
  }
}

