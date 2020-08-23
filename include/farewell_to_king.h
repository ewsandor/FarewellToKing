/*
 farewell_to_king.h
 FarewellToKing - Chess Library
 Edward Sandor
 November 2014 - 2020
 
 Contains delcarations of all methods for general game manipulation. 
*/

#ifndef _FAREWELL_TO_KING_H_
#define _FAREWELL_TO_KING_H_
#include "farewell_to_king_board.h"
#include "farewell_to_king_mask.h"
#include "farewell_to_king_types.h"

/**
 * @brief Begins a standard game of chess
 * 
 * @param game game to initialize
 */
void ftk_begin_standard_game(ftk_game_s *game);

/**
 * @brief Updates all board bitmasks for a game
 * 
 * @param game game to generate masks for
 */
void ftk_update_board_masks(ftk_game_s *game);

/**
 * @brief Make a move in a game
 * 
 * @param game Game to move in
 * @param target Position to move piece to
 * @param source Piece position to move
 * @param pawn_promotion Type to convert Pawn to in case of promotion, ignored in other cases (may use 'don't care').  Assumed Queen if not provided or invalid
 * @return Move Description of modifications made to game
 */
ftk_move_s ftk_move_piece(ftk_game_s *game, ftk_position_t target, ftk_position_t source, ftk_type_e pawn_promotion);

/**
 * @brief Move forward based on move structure
 *
 * @param game game to manipulate
 * @param move description of move to be reveresed.
 * @return char 
 */
ftk_result_e ftk_move_forward(ftk_game_s *game, ftk_move_s *move);

/**
 * @brief Move backward based on move structure
 *
 * @param game game to manipulate
 * @param move description of move to be reveresed.
 * @return char 
 */
ftk_result_e ftk_move_backward(ftk_game_s *game, ftk_move_s *move);

/**
 * @brief Checks if current turn's player is in check
 * 
 * @param game 
 * @return ftk_check_e 
 */
ftk_check_e ftk_check_for_check(const ftk_game_s *game);

/**
 * @brief Checks if current player has any legal moves
 * 
 * @param game 
 * @return true 
 * @return false 
 */
bool ftk_check_legal_moves(const ftk_game_s *game);

/**
 * @brief Checks if a game end condition has been met
 * 
 * @param game 
 * @return ftk_game_end_e 
 */
ftk_game_end_e ftk_check_for_game_end(const ftk_game_s *game);


#endif // _FAREWELL_TO_KING_H_