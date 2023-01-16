# ws2812

Stuff for the ws2812 addressible LED

Late to the party, I know...story of my life

If you're curious about the wire protocol, check out Blink_0. You will need an oscilloscope. It's dead-simple, it blinks an LED or two. Using your scope, watch the Din line. You will see the data, 24 bits per LED, written out in GRB order (ws2812). Short duty cycle is zero, long duty cycle is 1. MSB first. You can read about this, of course. But it helped me to see it in action, it helped me understand what is going on, on that mysterious Din pin. This was a nice-to-know, not a need-to-know thing. Maybe you're curious too...check it out, no pun intended.
