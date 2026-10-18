/* speed.exe 006069c0 FUN_006069c0; analysis pseudocode, not buildable source.
 * calls 007ca628 __setjmp3
 */

undefined4 FUN_006069c0(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_4c;
  undefined1 local_48 [64];
  undefined4 local_8;
  
  local_4c = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 **)(param_1 + 0x50) = &local_4c;
  local_8 = 0;
  iVar1 = __setjmp3(local_48,0);
  if (iVar1 == 0) {
    (*param_2)(param_1,param_3);
    *(undefined4 *)(param_1 + 0x50) = local_4c;
    return local_8;
  }
  *(undefined4 *)(param_1 + 0x50) = local_4c;
  return local_8;
}

