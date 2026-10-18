/* speed.exe 0084a840 FUN_0084a840; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0084a840(int param_1)

{
  int in_EAX;
  
  if (in_EAX < 0) {
    if (((param_1 != 0x2733) && (param_1 != 0x2746)) && (param_1 != 0x3e5)) {
      if ((param_1 == 0x2743) || (param_1 == 0x2751)) {
        return -5;
      }
      if (param_1 == 0x2749) {
        return -2;
      }
      if (param_1 == 0x274d) {
        return -6;
      }
      return (uint)(param_1 != 0x2726) * 4 + -0xb;
    }
    in_EAX = 0;
  }
  return in_EAX;
}

