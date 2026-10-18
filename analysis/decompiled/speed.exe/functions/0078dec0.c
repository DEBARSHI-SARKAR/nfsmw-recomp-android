/* speed.exe 0078dec0 FUN_0078dec0; analysis pseudocode, not buildable source.
 * calls 0056c750 FUN_0056c750
 * calls 00598a30 FUN_00598a30
 * calls 00460f80 FUN_00460f80
 * calls 0056bc10 FUN_0056bc10
 * calls 0056c6e0 FUN_0056c6e0
 */

void __thiscall FUN_0078dec0(int param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x73c) != 0) {
    FUN_0056c6e0(*(int *)(param_1 + 0x73c));
  }
  pcVar2 = (char *)(param_2 + 0x40);
  if (((pcVar2 == (char *)0x0) || (*pcVar2 != '0')) || (*(char *)(param_2 + 0x41) != 'x')) {
    bVar1 = false;
  }
  else {
    uVar3 = FUN_00460f80(pcVar2);
    bVar1 = true;
    pcVar2 = (char *)FUN_0056bc10(uVar3);
  }
  uVar3 = FUN_00598a30(*(undefined4 *)(*(int *)(param_1 + 0x738) + 0x10),&DAT_00890978,1,0x1a294dad,
                       0xeb0ffe1,pcVar2);
  *(undefined4 *)(param_1 + 0x73c) = uVar3;
  if (!bVar1) {
    FUN_0056c750();
  }
  return;
}

