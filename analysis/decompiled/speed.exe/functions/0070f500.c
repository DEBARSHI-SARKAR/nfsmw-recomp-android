/* speed.exe 0070f500 FUN_0070f500; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 * calls 00705a20 FUN_00705a20
 * calls 00464050 FUN_00464050
 * calls 00465240 FUN_00465240
 * calls 00652ad0 _malloc
 * calls 004662e0 FUN_004662e0
 * calls 007029c0 FUN_007029c0
 * calls 00460a10 FUN_00460a10
 */

void __thiscall FUN_0070f500(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087fd54;
  local_c = ExceptionList;
  if ((DAT_008f8700 != 0) && (*(int *)(param_1 + 8) == 0)) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0xc) = param_2;
    uVar1 = FUN_00465a70(param_2,0);
    *(undefined4 *)(param_1 + 8) = uVar1;
    DAT_00901bc8 = FUN_00460a10();
    FUN_00465240(DAT_00901bc8,*(undefined4 *)(param_1 + 8),param_2,"Speech Cache Memory Pool");
    pvVar2 = _malloc(0xc);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      uVar1 = FUN_00705a20();
      *(undefined4 *)((int)pvVar2 + 4) = uVar1;
      *(undefined4 *)((int)pvVar2 + 8) = 0;
    }
    *(void **)(param_1 + 4) = pvVar2;
    local_4 = 0xffffffff;
    iVar3 = FUN_004662e0(0x80,0xa0,"CACHE: Speech Event slotpool",DAT_00901bc8);
    *(int *)(param_1 + 0x14) = iVar3;
    *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) & 0xfffffffe;
    uVar1 = FUN_00464050(DAT_00901bc8);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    FUN_007029c0(100);
  }
  ExceptionList = local_c;
  return;
}

