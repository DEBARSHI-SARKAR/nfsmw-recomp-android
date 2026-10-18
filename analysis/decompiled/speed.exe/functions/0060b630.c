/* speed.exe 0060b630 FUN_0060b630; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 * calls 0060b480 FUN_0060b480
 */

void FUN_0060b630(int param_1,int *param_2,undefined4 param_3)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_4;
  
  puVar1 = (&PTR_DAT_008a3c88)[*param_2];
  local_4 = 0;
  piVar2 = (int *)**(undefined4 **)(param_1 + 0x14);
  do {
    if ((int *)(*(undefined4 **)(param_1 + 0x14))[1] <= piVar2) {
LAB_0060b66b:
      FUN_00613880(param_1,"attempt to %s a %s value",param_3,puVar1);
      return;
    }
    if (param_2 == piVar2) {
      iVar3 = FUN_0060b480((int)param_2 - *(int *)(param_1 + 0xc) >> 3,&local_4);
      if (iVar3 != 0) {
        FUN_00613880(param_1,"attempt to %s %s `%s\' (a %s value)",param_3,iVar3,local_4,puVar1);
        return;
      }
      goto LAB_0060b66b;
    }
    piVar2 = piVar2 + 2;
  } while( true );
}

