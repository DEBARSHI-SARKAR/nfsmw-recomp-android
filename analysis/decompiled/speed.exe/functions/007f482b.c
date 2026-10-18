/* speed.exe 007f482b FUN_007f482b; analysis pseudocode, not buildable source.
 * calls 007f66a8 FUN_007f66a8
 */

void __thiscall FUN_007f482b(int param_1,int param_2)

{
  if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x6a) = 1;
    *(undefined4 *)(param_1 + 0x6c) = 0x80;
  }
  else {
    *(undefined1 *)(param_1 + 0x6a) = 0;
    FUN_007f66a8(0,0,&param_2);
  }
  return;
}

