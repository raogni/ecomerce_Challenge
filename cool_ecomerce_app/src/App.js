//import logo from './logo.svg';
import './App.css';
import Hero from './components/Hero';
import { BrowserRouter as Router, Routes, Route } from 'react-router-dom';
import Navbar from './components/Navbar';
import Home from './Pages/Home';
import Footer from './components/Footer';

import Checkout from './components/CheckOut';
import ProductSection from './Pages/ProductSection';
import Login from './Pages/Login';
//simport Search from './Pages/Search';
//import Category from './components/Category';

const App = () => {
  return (
    <div className="app">
      <Home />
    </div>
  );
};


export default App;
