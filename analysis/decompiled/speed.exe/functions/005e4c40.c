/* speed.exe 005e4c40 FUN_005e4c40; analysis pseudocode, not buildable source.
 * calls 00460cd0 FUN_00460cd0
 */

undefined4 __thiscall FUN_005e4c40(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)(param_2 + 4);
  puVar2 = (undefined1 *)(param_1 + 0x148);
  iVar1 = 8;
  do {
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar2 + 4);
    *(undefined4 *)(puVar3 + -4) = *(undefined4 *)(puVar2 + -4);
    *puVar3 = *puVar2;
    FUN_00460cd0(puVar3 + 8,puVar2 + 0xc,0x13);
    puVar2 = puVar2 + 0x24;
    puVar3 = puVar3 + 0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 8;
}

