/* speed.exe 0044fd60 FUN_0044fd60; analysis pseudocode, not buildable source.
 * calls 0044e9b0 FUN_0044e9b0
 */

undefined4 __fastcall FUN_0044fd60(int *param_1)

{
  char cVar1;
  undefined4 in_EAX;
  undefined3 uVar2;
  undefined3 extraout_var;
  
  uVar2 = (undefined3)((uint)in_EAX >> 8);
  if ((char)param_1[0xe] != '\0') {
    cVar1 = (**(code **)(*param_1 + 8))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    FUN_0044e9b0();
    *(undefined1 *)(param_1 + 0xe) = 0;
    uVar2 = extraout_var;
  }
  return CONCAT31(uVar2,1);
}

