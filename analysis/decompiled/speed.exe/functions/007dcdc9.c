/* speed.exe 007dcdc9 $sigreterror$20139; analysis pseudocode, not buildable source.
 * calls 007cb270 FUN_007cb270
 */

/* Library Function - Single Match
    $sigreterror$20139
   
   Library: Visual Studio 2003 Debug */

undefined4 _sigreterror_20139(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)FUN_007cb270();
  *puVar1 = 0x16;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0xffffffff;
}

