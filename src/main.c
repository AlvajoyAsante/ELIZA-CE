/*
 *--------------------------------------
 * Program Name: ELIZA
 * Author: ALVAJOY ASANTE
 * License: MIT license
 * Description: A simple chatbot that uses the Eliza algorithm to simulate a conversation with a human.
 *--------------------------------------
*/

/*
 *--------------------------------------
 * Credits
 * - Eliza algorithm by Joseph Weizenbaum
 * - https://github.com/wadetb/eliza for the dataset and algrithm
 * - Oxygen Library by Alvajoy Asante
 *--------------------------------------
*/


#define ___ELIZA_VERSION "1.0.0"

#include <tice.h>
#include <graphx.h>
#include <keypadc.h>

/* Include the converted graphics file */
#include "gfx/gfx.h"

/* Include Oxygen Library */
#include "Oxygen/oxygen/oxygen.h"



/* Loads the dataset from an appvar */
void load_dataset(void)
{
    /* Open the appvar */
    ti_var_t appvar = ti_Open("ELIZA", "r");

    /* Check if the appvar exists */
    if (appvar)
    {
        /* Read the dataset */
        ti_Read(&dataset, sizeof(dataset), 1, appvar);

        /* Close the appvar */
        ti_Close(appvar);
    }
}


/* Render splash screen */
static void render_splash(void)
{
    /* Clear the screen */
    gfx_FillScreen(0);

    /* Draw the splash screen */
    // gfx_TransparentSprite(splash, 0, 0);

    /* Update the screen */
    gfx_SwapDraw();

    /* Wait for a key press */
    while (!os_GetCSC());
}

/* Render chat input */
static void render_chat_input(void)
{
    /* Clear the screen */
    gfx_FillScreen(0);

    /* Draw the chat input */
    // gfx_TransparentSprite(chat_input, 0, 0);

    /* Update the screen */
    gfx_SwapDraw();
}



int main(void)
{
    /* Initialize graphics drawing */
    gfx_Begin();

    /* Set the palette for color */
    // gfx_SetPalette(global_palette, sizeof_global_palette, 0);


    /* Render splash screen */

    render_splash();


    /* Render chat input */
    render_chat_input();



    /* End graphics drawing */
    gfx_End();

    return 0;
}