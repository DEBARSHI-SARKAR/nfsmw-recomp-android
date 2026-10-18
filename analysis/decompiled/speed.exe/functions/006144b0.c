/* speed.exe 006144b0 FUN_006144b0; analysis pseudocode, not buildable source.
 * calls 00614240 FUN_00614240
 * calls 00608510 FUN_00608510
 * calls 00613880 FUN_00613880
 */

float10 FUN_006144b0(void)

{
  undefined1 uVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined4 local_4;
  
  if (in_EAX[3] != 0) {
    iVar2 = 4;
    do {
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + -1);
      uVar1 = FUN_00614240();
      *(undefined1 *)register0x00000010 = uVar1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return (float10)local_4;
  }
  iVar2 = FUN_00608510(in_EAX[1],&local_4,4);
  if (iVar2 != 0) {
    FUN_00613880(*in_EAX,"unexpected end of file in %s",in_EAX[4]);
  }
  return (float10)local_4;
}

