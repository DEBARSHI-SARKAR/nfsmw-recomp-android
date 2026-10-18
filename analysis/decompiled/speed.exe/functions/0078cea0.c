/* speed.exe 0078cea0 FUN_0078cea0; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 008379b0 FUN_008379b0
 * calls 0083a980 FUN_0083a980
 */

void __thiscall FUN_0078cea0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined1 local_50;
  undefined4 local_4f;
  
  local_50 = 0;
  puVar2 = &local_4f;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_0083a980(&local_50,0x50,&DAT_0089dcd0,in_stack_00000024);
  FUN_0083c880(&local_50,0x50,&DAT_008b68ec,&stack0x0000002c);
  FUN_0083a980(&local_50,0x50,&DAT_008b68e8,in_stack_0000004c);
  FUN_0083c880(&local_50,0x50,&DAT_008b68e4,&stack0x00000050);
  FUN_0083a980(&local_50,0x50,&DAT_008b68e0,in_stack_00000070);
  FUN_0083a980(&local_50,0x50,&DAT_008b68dc,in_stack_00000028);
  FUN_008379b0(*(undefined4 *)(param_1 + 0xf8),in_stack_00000074,0,&local_50,0);
  return;
}

