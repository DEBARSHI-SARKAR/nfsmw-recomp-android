/* speed.exe 00868660 Unwind@00868660; analysis pseudocode, not buildable source.
 * calls 007c5880 ~exception
 */

void Unwind_00868660(void)

{
  int unaff_EBP;
  
  exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}

