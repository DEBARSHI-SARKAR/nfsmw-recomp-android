/* speed.exe 0085c210 FUN_0085c210; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0085c210(int param_1)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  if (param_1 != in_EAX) {
    unaff_ESI[0x5f] = 1;
    (*(code *)*unaff_ESI)();
    unaff_ESI[0x5f] = 0;
  }
  return;
}

