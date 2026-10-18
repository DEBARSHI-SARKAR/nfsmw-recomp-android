/* speed.exe 00842940 FUN_00842940; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 */

void FUN_00842940(int param_1,int param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(param_1 + 0x10c);
  *puVar1 = 0;
  FUN_0083c880(puVar1,0x100,&DAT_008b6d40,param_2);
  FUN_0083c880(puVar1,0x100,&DAT_008c6ac0,param_2 + 0x14);
  FUN_0083c880(puVar1,0x100,&DAT_008b6dc0,param_2 + 0x34);
  FUN_0083c880(puVar1,0x100,&DAT_008c6ab8,param_2 + 0x54);
  FUN_0083c880(puVar1,0x100,&DAT_008b6dd8,param_2 + 0x74);
  FUN_0083c880(puVar1,0x100,&DAT_008b6de0,param_2 + 0x78);
  FUN_0083c880(puVar1,0x100,&DAT_008b6d98,param_2 + 0x7c);
  FUN_0083c880(puVar1,0x100,&DAT_0089ebf8,param_2 + 0x9c);
  FUN_0083c880(puVar1,0x100,&DAT_008b6d94,param_2 + 0xc4);
  return;
}

