/* speed.exe 0060a670 FUN_0060a670; analysis pseudocode, not buildable source.
 * calls 005e2970 FUN_005e2970
 * calls 005dacf0 FUN_005dacf0
 */

void FUN_0060a670(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 local_18 [8];
  undefined1 auStack_10 [4];
  undefined1 local_c [12];
  
  if ((((param_1 != 0) && (param_2 != 0)) && (cVar1 = FUN_005e2970(local_c), cVar1 != '\0')) &&
     (cVar1 = FUN_005dacf0(local_18), cVar1 != '\0')) {
    (**(code **)(*DAT_0092c67c + 0x2c))(0);
    (**(code **)(*DAT_0092c67c + 0x1c))(auStack_10,&stack0xffffffe4,param_2,param_2,param_3);
  }
  return;
}

