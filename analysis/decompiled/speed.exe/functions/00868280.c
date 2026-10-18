/* speed.exe 00868280 Unwind@00868280; analysis pseudocode, not buildable source.
 * calls 007c5880 ~exception
 */

void Unwind_00868280(void)

{
  int unaff_EBP;
  
  exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}

