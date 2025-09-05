import { useState, useEffect } from 'react';
import './App.css';

function MovieSearch() {
  const [searchQuery, setSearchQuery] = useState('');
  const [filteredMovies, setFilteredMovies] = useState([]);

  const movies = [
    'Inception',
    'The Dark Knight',
    'Interstellar',
    'The Matrix',
    'Pulp Fiction',
    'Forrest Gump',
    'The Shawshank Redemption',
    'Fight Club',
    'Parasite',
    'Spirited Away',
    'The Godfather',
    'Goodfellas',
    'The Social Network',
    'Whiplash',
    'Mad Max: Fury Road',
    'The Grand Budapest Hotel',
    'Her',
    'Eternal Sunshine of the Spotless Mind',
    'No Country for Old Men',
    'There Will Be Blood'
  ];

  useEffect(() => {
    const debounceTimer = setTimeout(() => {
      const filtered = movies.filter(movie =>
        movie.toLowerCase().includes(searchQuery.toLowerCase())
      );
      setFilteredMovies(filtered);
    }, 500);

    return () => clearTimeout(debounceTimer);
  }, [searchQuery]);

  return (
    <div className="movie-search-container">
      <input
        className="search-input"
        type="text"
        value={searchQuery}
        onChange={(e) => setSearchQuery(e.target.value)}
        placeholder="Search for a movie..."
      />
      <ul className="movie-list">
        {filteredMovies.length > 0 ? (
          filteredMovies.map((movie, index) => (
            <li className="movie-item" key={index}>{movie}</li>
          ))
        ) : (
          <div className="no-results">
            {searchQuery ? 'No movies found. Try a different search.' : 'Start typing to search movies...'}
          </div>
        )}
      </ul>
    </div>
  );
}

export default MovieSearch;
