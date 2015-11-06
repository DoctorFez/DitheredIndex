// NO WARRANTY 
// 
// BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, ERICSSON MAKES NO
// REPRESENTATIONS OF ANY KIND, EXTENDS NO WARRANTIES OF ANY KIND; EITHER
// EXPRESS OR IMPLIED; INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE. THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE
// PROGRAM IS WITH YOU. SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME
// THE COST OF ALL NECESSARY SERVICING, REPAIR OR CORRECTION. ERICSSON
// MAKES NO WARRANTY THAT THE MANUFACTURE, SALE, LEASE, USE OR
// IMPORTATION WILL BE FREE FROM INFRINGEMENT OF PATENTS, COPYRIGHTS OR
// OTHER INTELLECTUAL PROPERTY RIGHTS OF OTHERS, AND IT SHALL BE THE SOLE
// RESPONSIBILITY OF THE LICENSEE TO MAKE SUCH DETERMINATION AS IS
// NECESSARY WITH RESPECT TO THE ACQUISITION OF LICENSES UNDER PATENTS
// AND OTHER INTELLECTUAL PROPERTY OF THIRD PARTIES;
// 
// IN NO EVENT WILL ERICSSON, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY
// GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF
// THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED TO
// LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY
// YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY
// OTHER PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED
// OF THE POSSIBILITY OF SUCH DAMAGES.
// 
// (C) Ericsson AB 2005. All Rights Reserved.
// 
#ifndef IMAGE_H
#define IMAGE_H

bool fReadPPM(char *filename, int &width, int &height, unsigned char *&pixels,bool reverse_y);
bool fWritePPM(char *filename, int width, int height, unsigned char *pixels,bool reverse_y);

#endif