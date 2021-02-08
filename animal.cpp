/* https://zetcode.com/gui/gtk2/firstprograms */

#include <iostream>
#include <gtk/gtk.h>
#include "animal.h"

using namespace std;

Animal::Animal() {
    name = "Animal";
};

void Animal::printName() {
    cout << name << endl;
};

void Animal::showWindow(void) {
    GtkWidget *window;
    gtk_init(0, NULL);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    gtk_window_set_title (GTK_WINDOW (window), name.c_str());
    gtk_window_set_default_size (GTK_WINDOW (window), 300, 200);
    gtk_window_set_position(GTK_WINDOW (window), GTK_WIN_POS_CENTER);

    gtk_widget_show(window);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_main();
};
